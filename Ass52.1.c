// Count ON Bit from number
#include<stdio.h>

typedef unsigned int UINT;

int CountONBit(UINT iNo)
{
    UINT Mask = 0X00000001;
    int iCnt = 0;
    UINT iAns = 0;

    while(iNo >= Mask)
    {
        iAns = iNo & Mask;
        if(iAns != 0)
        {
            iCnt++;
        }
        Mask = Mask << 1;
    }
    return iCnt;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountONBit(iValue);
    printf("ON Bit is : %d",iRet);

    return 0;
}