// ON Bit
#include<stdio.h>

typedef unsigned int UINT;

UINT ONBit(UINT iNo, UINT iPos)
{
    UINT Mask = 0X00000001;
    UINT Result = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid Position :\n");
        return -1;
    }

    Mask = Mask << (iPos - 1);
    Result = iNo | Mask;

    return Result;
}

int main()
{
    UINT iValue = 0;
    UINT iPosition = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Position :\n");
    scanf("%d",&iPosition);

    iRet = ONBit(iValue,iPosition);
    printf("Modified Number is : %d",iRet);
  
    return 0;
}