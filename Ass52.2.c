// Count Comman on Bit of two Number
#include<stdio.h>

typedef unsigned int UINT;

void DisplayCommanBitPos(UINT iNo1, UINT iNo2)
{
    UINT Mask = 0X00000001;
    UINT iRet1 = 0, iRet2 = 0;
    int iCnt = 0;

    printf("Comman On bit is : \n");
    while(iNo1 >= Mask && iNo2 >= Mask)
    {
        iCnt++;
        iRet1 = iNo1 & Mask;
        iRet2 = iNo2 & Mask;
        if(iRet1 != 0 && iRet2 != 0)
        {
            printf("%d\n",iCnt);
        }
        Mask = Mask << 1;
    }
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    DisplayCommanBitPos(iValue1,iValue2);

    return 0;
}