#include<stdio.h>
#define METER 1000

int ConvertMeter(int iNo)
{
    int iAns = 0;

    iAns = iNo*METER;
    
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Kilometer : \n");
    scanf("%d",&iValue);

    iRet = ConvertMeter(iValue);
    printf("Meter is : %d",iRet);

    return 0;
}