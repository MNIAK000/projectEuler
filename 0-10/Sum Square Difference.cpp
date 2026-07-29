#include <iostream>

void sumSquareDifference(int n)
{
    int soq = 0;

    for (int i = 1; i <=n; ++i)
    {
        soq+= i*i;
    }

    int qos = 0;

    for (int i = 1; i <=n; ++i)
    {
        qos+=i;
    }
    qos*=qos;

    std::cout << qos-soq;

}

int main()
{
    sumSquareDifference(100);
}