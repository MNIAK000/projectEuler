#include <iostream>
#include <cmath>

void problemZero(int n) //find the sum of n odd square numbers
{
    long long oddNum = 1;
    long long sum = 0;

    for (int i = 0; i < n/2; ++i )
    {
        sum += oddNum * oddNum;
        oddNum+=2;
    }

    std::cout << sum;
}

int main()
{
    problemZero(107000);
}