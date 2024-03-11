// Toggle bit in range
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(int iNo, int iPos1, int iPos2)
{
    UINT Mask1 = 0XFFFFFFFE;
    UINT Mask2 = 0X7FFFFFFF;
    UINT Mask = 0;
    UINT iRet = 0;
    Mask1 = Mask1 << (iPos1 - 1);
    Mask2 = Mask2 >> (32 - iPos2);

    Mask = Mask1 & Mask2;

    iRet = iNo ^ Mask;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    int X = 0, Y = 0;
    UINT iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Range one :");
    scanf("%d",&X);

    printf("Enter Range Second :");
    scanf("%d",&Y);

    iRet = ToggleBit(iValue,X,Y);
    printf("Toggle number is : %d",iRet);

    return 0;
}