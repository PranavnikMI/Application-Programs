#include<stdio.h>
#include<stdlib.h>

void DisplayDivisibleByFiveThree(int *Arr, int iLength)
{
    int iCnt = 0;

    printf("Element Devided by five and three is : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0 && Arr[iCnt] % 3 == 0)
        {
            printf("%d",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, i = 0;
    int *Ptr = NULL;

    printf("Enter Size of Element you want : \n"); 
    scanf("%d",&iSize);

    Ptr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the Element of Array :\n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Ptr[i]);
    }

    DisplayDivisibleByFiveThree(Ptr,iSize);
    
    return 0;
}