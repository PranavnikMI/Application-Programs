#include<stdio.h>

int DiffFactorial(int iNo)
{
    int iEFact = 1, iOFact = 1, iAns = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEFact = iEFact * iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iOFact = iOFact * iCnt;
        }
    }
    iAns = iEFact - iOFact;

    if(iAns < 0)
    {
        iAns = -iAns;
    }

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DiffFactorial(iValue);
    printf("Difference between Odd and even Factorial is : %d",iRet);

    return 0;
}