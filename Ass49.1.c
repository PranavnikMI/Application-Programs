// check 15 bit is on or off
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT Mask = 0X00004000;
    UINT Result = 0;

    Result = iNo & Mask;
    if(Result == Mask)
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
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        printf("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }

    return 0;
}