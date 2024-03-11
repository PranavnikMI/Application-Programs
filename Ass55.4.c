#include<stdio.h>

int Factorial(int iNo)
{
    static int iFact = 1;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Factorial(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factrial of %d is : %d",iValue,iRet);

    return 0;
}