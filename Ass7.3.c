#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("-%d\t",iCnt);
    }
    for(iCnt = 0; iCnt<= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}