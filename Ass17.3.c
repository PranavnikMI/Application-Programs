#include<stdio.h>
#include<stdlib.h>

int DifferenceLargerSmallerNumber(int *Arr, int iLength)
{
    int iCnt = 0, iLarge = Arr[0], iSmall = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return (iLarge - iSmall);
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

    iRet = DifferenceLargerSmallerNumber(ptr, iSize); 
    printf("Difference B/W larger and Smaller number is : %d",iRet);

    free(ptr);

    return 0;
}