#include <algorithm>
#include <iostream>
#include <string>

void palindrome(int lim1, int lim2)
{
    int best = 0;
    int bestI = 0, bestJ = 0;

    for (int i = 100; i<lim1; ++i)
    {
        for (int j = 100; j<lim2; ++j)
        {
            int mult = i*j;

            std::string str = std::to_string(mult);
            std::string rev = str;
            std::reverse(rev.begin(), rev.end());

            if (str == rev && mult > best)
            {
                best = mult;
                bestI = i;
                bestJ = j;
            }
        }
    }

    std::cout << bestI << " and " << bestJ << " = " << best << std::endl;
}

int main()
{
    palindrome(1000, 1000);
}