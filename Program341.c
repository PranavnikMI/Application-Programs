// Take Number and Position of bit and check wether bit is on or off
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;

    if((Pos < 1) || (Pos > 32))
    {
        printf("Invalid Position it should between 1 to 32\n");
        return false;
    }

    iMask = iMask << (Pos-1);   //Dynamic Mask Formation

    Result = No & iMask;

    if(Result == iMask)
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
    UINT Value = 0;
    UINT Position = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&Value);

    printf("Enter the Position of bit :\n");
    scanf("%d",&Position);

    bRet = CheckBit(Value,Position);
    if(bRet == true)
    {
        printf("%d Bit is ON",Position);
    }
    else
    {
        printf("%d Bit is OFF",Position);
    }

    return 0;
}