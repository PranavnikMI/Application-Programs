// Toggle 7th bit
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT Mask = 0X00000040;
    UINT iRet = 0;

    iRet = iNo ^ Mask;

    return iRet;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);
    printf("Toggle Number is : %d",iRet);

    return 0;
}