//  Count Number of Digit in Number
#include<stdio.h>

int CountDigitR(int No)
{
    static int iCnt = 0;

    if(No != 0)
    {
        iCnt++;
        No = No / 10;
        CountDigitR(No);
    }
    return iCnt;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter Number\n");
    scanf("%d",&Value);

    Ret = CountDigitR(Value);
    printf("No of Digit in %d is : %d",Value,Ret);

    return 0;
}