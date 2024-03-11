// Count the on bit of Number
#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
    int Digit = 0, iCnt = 0;

    while(No != 0)
    {
        Digit = No % 2;
        iCnt = iCnt + Digit;
        No = No / 2;
    }
    return iCnt;
}

int main()
{
    UINT Value = 0;
    int Ret = 0;

    printf("Enter Number : \n");
    scanf("%d", &Value);

    Ret = CountOnBits(Value);
    printf("Numbers of Bits which ON are : %d",Ret);

    return 0;
}