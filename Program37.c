// Summation of the Non factors of given number

#include<stdio.h>

int SumNonFactcor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    } 
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFactcor(iValue);
    printf("Summation of Non factor of %d is : %d",iValue,iRet);

    return 0;
}