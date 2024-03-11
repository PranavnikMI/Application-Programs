#include<stdio.h>
#include<stdlib.h>

int SummationDigit(int iNo)
{
    int iSum = 0, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

void SummationDigitNumber(int *Arr, int iLength)
{
    int iCnt = 0, iAns = 0;

    printf("Summation of Digit of each Number is :\n ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iAns = SummationDigit(Arr[iCnt]);
        printf("%d\t",iAns);
        iAns = 0;
    }
}

int main()
{
    int iSize = 0, i = 0;
    int *ptr = NULL;
    
    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    printf("Enter the Numbers of Array : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    SummationDigitNumber(ptr, iSize); 

    free(ptr);

    return 0;
}