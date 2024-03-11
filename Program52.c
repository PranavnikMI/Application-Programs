// Accept Number from user and give sum of Digit in Number
// Handle all Case +ve

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Plese Enter Number : \n");
    scanf("%d",&iValue); 

    iRet = SumDigits(iValue);  

    printf("No of Digit are : %d\n",iRet);     

    return 0;
}

