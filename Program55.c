// Accept Number from user and count Even Digit in Number

#include<stdio.h>

int DisplayEvenDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;

    if (iNo == 0)
    {
        return 1;
    }
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;     
    }
    return iEvenCnt;   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Plese Enter Number : \n");
    scanf("%d",&iValue); 

    iRet = DisplayEvenDigits(iValue);  

    printf("No of even digit are : %d\n",iRet);     

    return 0;
}

