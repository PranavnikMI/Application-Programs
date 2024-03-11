// Accept Number from user and count Digit in Number
// Only Useful for Positive No

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    
    return iCnt;   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Plese Enter Number : \n");
    scanf("%d",&iValue); 

    iRet = CountDigits(iValue);  

    printf("No of Digit are : %d\n",iRet);     

    return 0;
}

