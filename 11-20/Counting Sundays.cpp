#include <iostream>
#include <vector>

bool isLeap(int n)
{
    if (n%4==0 && n%100!=0)
    {
        return true;
    }
    if (n%100 == 0 && n&400==0)
    {
        return true;
    }

    return false;

}

bool Is31(int n)
{
    switch (n)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return true;
            break;


        default:
            return false;
            break;

    }
}

int getDaysInMonth(int month, int year) {
    if (month == 2) return isLeap(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

int sundayCounter(int start, int end) //its 5 AM don't judge my code.
{
    int ans=0;
    int sundayDate = 6;

    for (size_t i = start; i < end; ++i)
    {
        for (size_t j = 1; j <= 12; ++j)
        {
            int n = 1;

            if (sundayDate == 1)
            {
                ans++;
            }

            int totalDays = getDaysInMonth(i, j);


            while (sundayDate <= totalDays)
            {
                sundayDate += 7;
            }

            sundayDate -= totalDays;

        }
    }

    return ans;
}



int main()
{
    std::cout << sundayCounter(1901, 2001);
}