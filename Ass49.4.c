#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT Mask = 0X000001C0;
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
        printf("7th, 8th, 9th bit is ON");
    }
    else
    {
        printf("7th, 8th, 9th bit is OFF");
    }

    return 0;
}