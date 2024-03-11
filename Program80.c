// Take no from and cheak its occure in array or not and ruduce time compexity
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the Element to find out Occurance : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    bRet = CheckOccurance(ptr, iLength, iValue);
    if(bRet == true)
    {
        printf("%d is occured in the array\n",iValue);
    }
    else
    {
        printf("There is no %d occur in array \n",iValue);
    }


    

    free(ptr);

    return 0;
}