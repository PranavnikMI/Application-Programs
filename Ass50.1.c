// Off 7th bit if it is ON
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT Mask = 0XFFFFFFBF;
    UINT iRet = 0;

    iRet = iNo & Mask;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    printf("Modified Number is : %d",iRet);

    return 0;
}