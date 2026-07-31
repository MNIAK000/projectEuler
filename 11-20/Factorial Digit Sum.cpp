#include <iostream>
#include <vector>

void factorSum(int n) //same as power digit sum lmao
{
    std::vector<int> digits = {1};
    for (size_t i = 2; i <= n; ++i)
    {
        int temp = 0;

        for (size_t j = 0; j < digits.size(); ++j)
        {
            int num = digits[j]*i + temp;
            digits[j] = num%10;
            temp = num / 10;
        }

        while (temp > 0)
        {
            digits.push_back(temp%10);
            temp/=10;
        }
    }

    int sum = 0;
    for (const auto &i : digits)
    {
        sum+= i;
    }

    std::cout << sum;
}

int main()
{
    factorSum(100);
}