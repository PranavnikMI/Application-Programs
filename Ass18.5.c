#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo*2; iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);
}