#include<stdio.h>

int Multipication(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    iMult = iNo1 * iNo2 * iNo3;
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter Number one : \n");
    scanf("%d",&iValue1);

    printf("Enter Number two : \n");
    scanf("%d",&iValue2);

    printf("Enter Number three : \n");
    scanf("%d",&iValue3);

    iRet = Multipication(iValue1, iValue2,iValue3);
    printf("Multipication of numbers is : %d ",iRet);

    return 0;
}