#include<stdio.h>
#include<stdlib.h>

int FrequencyEleven(int *Arr, int iLength)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0, i = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    printf("Enter the Numbers of Array : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = FrequencyEleven(ptr, iSize); 
    printf("Given Array %d no of Eleven",iRet);

    free(ptr);

    return 0;
}