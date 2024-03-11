// Tables of given number 

#include<stdio.h>

int DisplayTable(int iNo)
{
    int iCnt = 0;
    
    printf("________________________________\n");
    printf("Table of %d is : \n",iNo);
    printf("________________________________\n");
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d \n",iNo * iCnt);
    }
    printf("________________________________\n");
} 
    

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}