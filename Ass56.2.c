#include<stdio.h>

int MaxDigit(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        MaxDigit(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);
    printf("Maximum Digit in %d is : %d",iValue,iRet);

    return 0;
}