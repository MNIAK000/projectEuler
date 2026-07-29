#include <iostream>

void MultiplesOf3Or5(const int n)
{
    int totalSum = 0;
    int sum5 = 0;
    int sum3 = 0;
    int sum15 = 0;

    int multipleOf5 = n/5;
    if (n%10==0){multipleOf5-=1;}

    int multipleOf3 = n/3;
    if (n%3==0){multipleOf3-=1;}


    int multipleOf15 = n/15;
    if (n%15==0){multipleOf15-=1;}

    for (int i = 1; i <= multipleOf5; ++i)
    {
        sum5+=i;
    }

    for (int i = 1; i <= multipleOf3; ++i)
    {
        sum3+=i;
    }

    for (int i = 1; i <= multipleOf15; ++i)
    {
        sum15+=i;
    }

    totalSum = 5*sum5 + 3*sum3 - 15*sum15;

    std::cout << totalSum;
}


int main()
{
    MultiplesOf3Or5(1000);
}