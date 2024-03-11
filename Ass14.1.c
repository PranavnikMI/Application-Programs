#include<stdio.h>
#include<stdlib.h>

int DiffSumOddEven(int *Arr, int iNo)
{
    int iCnt = 0, iESum = 0, iOSum = 0, iAns = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iESum = iESum + Arr[iCnt];
        }
        else
        {
            iOSum = iOSum + Arr[iCnt];
        }
    }
    iAns = iESum - iOSum;

    return iAns;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;

    printf("Enter Size of Array :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the Element of Array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = DiffSumOddEven(ptr,iSize);
    printf("Difference B/W Even and Odd element in Array is : %d",iRet);

    free(ptr);

    return 0;
}