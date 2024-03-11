// Bit is on or off
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT Mask = 0X00000001;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid Position :\n");
        return false;
    }

    Mask = Mask << (iPos - 1);
    iResult = iNo & Mask;
    if(iResult == Mask)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UINT iValue = 0;
    UINT iPosition = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Position :\n");
    scanf("%d",&iPosition);

    bRet = CheckBit(iValue,iPosition);
    if(bRet == true)
    {
        printf("Bit at %d is ON",iPosition);
    }
    else
    {
        printf("Bit at %d is OFF",iPosition);
    }
    
    return 0;
}