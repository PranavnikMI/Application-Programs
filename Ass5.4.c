#include<stdio.h>

int MultFactorX(int iNo)
{
    int iMult = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    iRet = MultFactorX(iValue);
    printf("Multipication of factor is : %d ",iRet);

    return 0;
}