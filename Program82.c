// Take no from user and Return Larger Number
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter the Number of Element : \n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int) * iLength);

    printf("Enter the element : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr,iLength);

    printf("Maximum Number is : %d\n",iRet);

    free(ptr);

    return 0;
}