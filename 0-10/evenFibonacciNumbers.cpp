#include <iostream>

long long sum = 0;

void evenFibonacciNumbers(const long long limit, long long first, long long sec)
{
    if (first >= limit)
    {
        return;
    }

    if (first%2 == 0)
    {
        sum+=first;
    }



    int third = first + sec;


    evenFibonacciNumbers(limit, sec, third);

}

int main()
{
    evenFibonacciNumbers(4000000, 0,1);

    std::cout << sum;
}