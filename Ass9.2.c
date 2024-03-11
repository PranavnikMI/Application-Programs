#include<stdio.h>

int ConversionRs(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = ConversionRs(iValue);
    printf("Value of %d$ in indian rupee is : %d",iValue,iRet);

    return 0;
}