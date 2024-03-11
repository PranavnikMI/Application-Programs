#include<stdio.h>

void PrintCompare(int iNo)
{
    if(iNo < 50)
    {
        printf("less");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintCompare(iValue);
    
    return 0;
}