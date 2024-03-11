// Take Number and two Position of bit and check wether bit is on or off
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1, UINT Pos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iMask = 0;
    UINT Result = 0;

    if((Pos1 < 1) || (Pos1 > 32) || (Pos2 < 1) || (Pos2 > 32))
    {
        printf("Invalid Position it should between 1 to 32\n");
        return false;
    }

    iMask1 = iMask1 << (Pos1-1);
    iMask2 = iMask2 << (Pos2-1);

    iMask = iMask1 | iMask2;
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
    UINT Position1 = 0, Position2 = 0;
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&Value);

    printf("Enter the Position1 of bit :\n");
    scanf("%d",&Position1);

    printf("Enter the Position2 of bit :\n");
    scanf("%d",&Position2);

    bRet = CheckBit(Value,Position1, Position2);
    if(bRet == true)
    {
        printf("%d & %d Bit is ON",Position1,Position2);
    }
    else
    {
        printf("%d & %d Bit is OFF",Position1,Position2);
    }

    return 0;
}

/*
pos1 = 3
pos2 = 6

Mask1 = 0   0   0   0   0   0   0   1
Mask2 = 0   0   0   0   0   0   0   1

Mask1 = Mask1 << (Pos1 - 1);
Mask1 = Mask1 << (2);
Mask1 = 0   0   0   0   0   1   0   0

Mask2 = Mask2 << (Pos2 - 1);
Mask2 = Mask2 << (5);
Mask2 = 0   0   1   0   0   0   0   0

Mask = Mask1 | Mask2
Mask = 0    0   1   0   0   1   0   0
*/