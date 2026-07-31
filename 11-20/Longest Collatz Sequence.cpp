#include <iostream>

void collatz(long long x)
{
    long long maxcount = 0;
    long long ans = 1;
    for (long long j = 1; j < x; ++j)
    {
        long long i = j;
        long long count = 1;
        while (i != 1)
        {
            if (i%2==0)
            {
                i/=2;
                count++;
            }
            else
            {
                i = 3*i+1;
                count++;
            }
        }

        if (maxcount < count)
        {
            maxcount=count;
            ans = j;
        }
    }
    std::cout << ans;
}

int main()
{
    collatz(1000000);
}