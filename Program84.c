// Take no from user and Reverse the Number
#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize -1 ; iCnt >= 0; iCnt--)
    {
        printf("\n%d",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter the Number of Element : \n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int) * iLength);

    printf("Enter the element : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Element in Reverse is : ");
    DisplayReverse(ptr,iLength);

    free(ptr);

    return 0;
}