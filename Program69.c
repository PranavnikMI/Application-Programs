// take no from user and display number using loop
#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
   
    printf("Element of the Array are : ");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}