#include <iostream>

unsigned long long factorial(int n)
{
    unsigned long long ans=1;

    for (size_t i = 1; i <=n; ++i)
    {
        ans*=i;
    }

    return ans;
}

void lettuce(int n)
{

    // unsigned long long ans = factorial(2*n) / (factorial(n)*factorial(n)); //int overflow be damned

    unsigned long long ans = 1;

    for (int i = 1; i <= n; ++i)
    {
        ans = ans * (n + i) / i;
    }

    std::cout<< ans;

}

int main()
{
    int n = 20;
    lettuce(n);
}

