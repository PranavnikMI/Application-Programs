#include<stdio.h>

void PrintTimes(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt <= iNo * 5; iCnt+=iNo)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintTimes(iValue);
    
    return 0;
}