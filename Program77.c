// Take no from user and Display sum of even and odd element
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddSum(int Arr[], int iSize)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }

    }
    printf("Sum of Event Element is : %d \n",iEvenSum);
    printf("Sum of Odd Element is : %d \n",iOddSum);
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

    DisplayEvenOddSum(ptr, iLength);

    free(ptr);

    return 0;
}