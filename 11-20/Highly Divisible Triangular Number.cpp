#include <climits>
#include <cstdint>
#include <iostream>

int count_divisors(int k)
{
    int count = 0;
    for (int i = 1; i * i <= k; ++i)
    {
        if (k % i == 0)
        {
            count += (i * i == k) ? 1 : 2;
        }
    }
    return count;
}

void theThing(int x)
{
    int n = 1;

    while (true)
    {
        int d1, d2;

        if (n % 2 == 0)
        {
            d1 = count_divisors(n / 2);
            d2 = count_divisors(n + 1);
        }
        else
        {
            d1 = count_divisors(n);
            d2 = count_divisors((n + 1) / 2);
        }

        int total_divisors = d1 * d2;

        if (total_divisors > 500)
        {
            unsigned long long triangle_number = static_cast<unsigned long long>(n) * (n + 1) / 2;

            std::cout << triangle_number << std::endl;
            break;
        }

        n++;
    }
}

int main()
{
    theThing(500);
}