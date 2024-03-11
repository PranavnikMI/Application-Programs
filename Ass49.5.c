//First and last bit is on or not
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT Mask = 0X80000001;
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
        printf("First and last bit is ON");
    }
    else
    {
        printf("First and last bit is OFF");
    }

    return 0;
}