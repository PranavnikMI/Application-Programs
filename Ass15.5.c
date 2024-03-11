#include<stdio.h>
#include<stdlib.h>

int FrequencyNumber(int *Arr, int iLength, int No)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, i = 0, iRet = 0, iValue = 0;
    int *ptr = NULL;
    
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    printf("Enter the Numbers of Array : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = FrequencyNumber(ptr, iSize,iValue); 
    printf("Given Array %d is %d",iValue,iRet);

    free(ptr);

    return 0;
}