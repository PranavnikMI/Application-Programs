#include<stdio.h>
#include<stdlib.h>

int FrequencyDifference(int *Arr, int iLength)
{
    int iEvenFreq = 0,iOddFreq = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenFreq++;
        }
        if(Arr[iCnt] % 2 != 0)
        {
            iOddFreq++;
        }
    }
    return iEvenFreq - iOddFreq;
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

    iRet = FrequencyDifference(ptr, iSize); 
    printf("Difference B/W Frequency of Even and Odd Number is : %d",iRet);

    free(ptr);

    return 0;
}