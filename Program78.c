// Take no from and cheak its frequency in given arrey
// input : 10 11 10 34 12
// value : 10
// frequency : 2
#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }

    }
   return iFrequency;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the Element to find out Frequency : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    iRet = CalculateFrequency(ptr, iLength, iValue);
    printf("frequency of %d is %d\n",iValue,iRet);

    free(ptr);

    return 0;
}