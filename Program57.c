// Accept Number from user and display count of Even and odd Digit in Number

#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    if (iNo == 0)
    {
        iEvenCnt++;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;     
    }
    printf("Number of even digit and odd digit are : %d and %d",iEvenCnt,iOddCnt);
    
}

int main()
{
    int iValue = 0;
    
    printf("Plese Enter Number : \n");
    scanf("%d",&iValue); 

    DisplayEvenOddDigits(iValue);

    return 0;
}

