#include<stdio.h>
#include<stdlib.h>

int IndexLastNumber(int *Arr, int iLength, int iNo)
{
    int iCnt = 0, iAns = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iAns = iCnt;
        }
    }
    if(iAns < iLength)
    {
        return iAns;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iSize = 0, i = 0, iValue = 0, iRet = -1;
    int *ptr = NULL;
    
    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize*sizeof(int));

    printf("Enter the Numbers of Array : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = IndexLastNumber(ptr, iSize,iValue); 
    printf("Last occurance Index of %d is %d",iValue,iRet);

    free(ptr);

    return 0;
}