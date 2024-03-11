#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ContainEleven(int *Arr, int iLength)
{
    int iCnt = 0;
    bool bAns = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bAns = true;
        }
    }
    return bAns;
}

int main()
{
    int iSize = 0, i = 0;
    bool bRet = 0;
    int *ptr = NULL;

    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    printf("Enter the Numbers of Array : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    bRet = ContainEleven(ptr, iSize); 
    if(bRet == true)
    {
        printf("Given Array contain Eleven");
    }
    else
    {
        printf("Given Array not contain Eleven");
    }

    free(ptr);

    return 0;
}