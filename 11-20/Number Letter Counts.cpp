#include <iostream>

void counter()
{
    int oneToNine = 3+3+5+4+4+3+5+5+4;
    int hundred = 7;
    int thousand = 8;
    int And = 3;
    int tenToNineteen = 70;
    int tenTwentyThirtyETC = 46;

    int oneTo99 = oneToNine*9 + tenToNineteen + 10*tenTwentyThirtyETC;
    int hundredTo999 = (hundred*100 + And*99 + oneTo99)*9 + oneToNine*100;
    int total = hundredTo999 + 3 + thousand+oneTo99;

    std::cout << total;
}

int main()
{
    counter();
}