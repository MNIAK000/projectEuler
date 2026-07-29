#include <iostream>

int pythagoras()
{
    for (int b = 1; b < 1000; ++b)
    {
        for (int a = b; a > 0; --a)
        {
            int c = 1000 - a - b;

            if (a*a + b*b == c*c && a+b+c == 1000)
            {
                return a*b*c;
            }
        }
    }
}

int main()
{
    std::cout << pythagoras();
}