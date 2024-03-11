// Accept Number from user and display count of Even and odd Digit in Number

#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    if (iNo == 0)
    {
        printf("Number of even digit are : 1\n");
        printf("Number of odd digit are : 0\n");
        return ;
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
    printf("Number of even digit are : %d\n",iEvenCnt);
    printf("Number of odd digit are : %d\n",iOddCnt);
}

int main()
{
    int iValue = 0;
    
    printf("Plese Enter Number : \n");
    scanf("%d",&iValue); 

    DisplayEvenOddDigits(iValue);

    return 0;
}

