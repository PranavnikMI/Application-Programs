//  return Sum of Digit in Number
#include<stdio.h>

int SumDigitR(int No)
{
    static int iCnt = 0;
    static int Sum = 0;
    int Digit = 0;

    if(No != 0)
    {
        Digit = No % 10;
        Sum = Sum + Digit;
        iCnt++;
        No = No / 10;
        SumDigitR(No);
    }
    return Sum;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter Number\n");
    scanf("%d",&Value);

    Ret = SumDigitR(Value);
    printf("Sum of Digit in %d is : %d",Value,Ret);

    return 0;
}