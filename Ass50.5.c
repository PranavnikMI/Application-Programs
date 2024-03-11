// ON first 4 bit
#include<stdio.h>

typedef unsigned int UINT;

UINT ONBit(UINT iNo)
{
    UINT Mask = 0X0000000F;
    UINT iRet = 0;

    iRet = iNo | Mask;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = ONBit(iValue);
    printf("Modified Number is : %d",iRet);

    return 0;
}