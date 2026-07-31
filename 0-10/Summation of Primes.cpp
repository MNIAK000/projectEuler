#include <climits>
#include <iostream>
#include <vector>
#include <cmath>

void primeFinder(int n)
{
    long long sum = 0;
    std::vector<bool> isPrime(n + 1, true);

    if (n >= 0) isPrime[0] = false;
    if (n >= 1) isPrime[1] = false;


    for (int p = 2; p * p <= n; ++p)
    {
        if (isPrime[p])
        {
            for (int k = p * p; k <= n; k += p)
            {
                isPrime[k] = false;
            }
        }
    }

    int count = 0;
    for (int x = 2; x <= n; ++x)
    {
        if (isPrime[x])
        {
            ++count;
            std::cout << count << ") " << x << "\n";
            sum +=x;
        }
    }

    std::cout << "sum is: " << sum << std::endl;

}


int main()
{
    primeFinder(28);
}