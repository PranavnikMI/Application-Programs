#include<stdio.h>
#include<stdlib.h>

void RangeNumber(int *Arr, int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    printf("No in Range %d and %d is :\n",iNo1,iNo2);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iNo1 && Arr[iCnt] <= iNo2)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, i = 0, iValue1 = 0,iValue2 = 0;
    int *ptr = NULL;
    
    printf("Enter Size of Array : \n");
    scanf("%d",&iSize);

    printf("Enter start Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Last Number : \n");
    scanf("%d",&iValue2);

    ptr = (int *)malloc(iSize*sizeof(int));

    printf("Enter the Numbers of Array : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    RangeNumber(ptr, iSize,iValue1,iValue2); 

    free(ptr);

    return 0;
}