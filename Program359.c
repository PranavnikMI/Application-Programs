//  Count Number of Digit in Number
#include<stdio.h>

int CountDigitI(int No)
{
    int iCnt = 0;

    while(No != 0)
    {
        iCnt++;
        No = No / 10;
    }
    return iCnt;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter Number\n");
    scanf("%d",&Value);

    Ret = CountDigitI(Value);
    printf("No of Digit in %d is : %d",Value,Ret);

    return 0;
}