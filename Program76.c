// Take no from user and Display even and odd count
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int Arr[], int iSize)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }

    }
    printf("Number of Event Element is : %d \n",iEvenCnt);
    printf("Number of Odd Element is : %d \n",iSize - iEvenCnt);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplayEvenOddCount(ptr, iLength);

    free(ptr);

    return 0;
}