#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool FrequencyNumber(int *Arr, int iLength, int iNo)
{
    int iCnt = 0;
    bool bFreq = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFreq = true;
        }
    }
    return bFreq;
}

int main()
{
    int iSize = 0, i = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet = false;
    
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

    bRet = FrequencyNumber(ptr, iSize,iValue); 
    if(bRet == true)
    {
        printf("Given Array contain %d",iValue);
    }
    else
    {
        printf("Given Array not contain %d",iValue);
    }

    free(ptr);

    return 0;
}