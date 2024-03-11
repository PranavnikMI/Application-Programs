#include<stdio.h>

int DifferenceSumDigit(int iNo)
{
    int iDigit = 0, iESum = 0, iOSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iESum = iESum + iDigit;
        }
        if(iDigit % 2 != 0)
        {
            iOSum = iOSum + iDigit;
        }
        iNo = iNo/10;
    }
    return (iESum - iOSum);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DifferenceSumDigit(iValue);
    printf("Difference b/w Summation of even and odd digit in %d is : %d",iValue,iRet);

    return 0;
}