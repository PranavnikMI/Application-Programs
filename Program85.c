// Take no from user and cheak its index no of last occurance in array 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the Element to findout last Occurance : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    iRet = CheckLastOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d occur in array \n",iValue);
    }
    else
    {
        printf("%d is occured in the array at last index %d\n",iValue,iRet);
    }


    

    free(ptr);

    return 0;
}