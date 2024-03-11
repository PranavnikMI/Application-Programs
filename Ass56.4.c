#include<stdio.h>

int MinDigit(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        MinDigit(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);
    printf("Minimum Digit in %d is : %d",iValue,iRet);

    return 0;
}