// Cheak whether 9th or 12th bit is on or off of anumber
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheakON(UINT iNo)
{
    UINT Mask = 0X00000001;
    UINT iAns = 0;
    int iCnt = 0;
    bool Flag = false;

    while(iNo >= Mask)
    {
        iCnt++;
        iAns = iNo & Mask;
        if((iCnt == 9 && iAns != 0) || (iCnt == 12 && iAns != 0))
        {
            Flag = true;
        }
        Mask = Mask << 1;
    }
    return Flag;
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheakON(iValue);
    if(bRet == true)
    {
        printf("9th or 12th bit is ON");
    }
    else
    {
        printf("9th or 12th bit is OFF");
    }

    return 0;
}