// Cheak whether bit two position is on or off
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheakON(UINT iNo, int iPos1, int iPos2)
{
    UINT Mask = 0X00000001;
    UINT iAns = 0;
    int iCnt = 0;
    bool Flag = false;

    while(iNo >= Mask)
    {
        iCnt++;
        iAns = iNo & Mask;
        if((iCnt == iPos1 && iAns != 0) || (iCnt == iPos2 && iAns != 0))
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
    int x = 0, y = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    printf("Enter First Position : \n");
    scanf("%d",&x);

    printf("Enter Second Position : \n");
    scanf("%d",&y);

    bRet = CheakON(iValue,x,y);
    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}