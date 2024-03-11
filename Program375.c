// Return Sum of Array
#include<stdio.h>

int SumArrayR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int sum = 0; 

    if(iCnt < iSize)
    {
        sum = sum + Arr[iCnt];
        iCnt++;
        SumArrayR(Arr,iSize);
    }
    return sum;
}

int main()
{
    int Brr[5] = {10,20,30,40,50};
    int iRet = 0;

    iRet = SumArrayR(Brr,5);
    printf("Sum of Array is : %d",iRet);

    return 0;
}