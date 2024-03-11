#include<stdio.h>
#include<stdlib.h>

int CheckDigit(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

void ThreeDigitNumber(int *Arr, int iLength)
{
    int iCnt = 0, iAns = 0;

    printf("Number Contain three Digit in it is : ")
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iAns = CheckDigit(Arr[iCnt]);
        if(iAns == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
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

    ThreeDigitNumber(ptr, iSize); 

    free(ptr);

    return 0;
}