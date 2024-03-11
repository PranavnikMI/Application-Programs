#include<stdio.h>

void DisplayFactor(int iValue)
{
    int iCnt = 0;
    printf("Even Factor of Number is : \n");

    for(iCnt = 1; iCnt <= (iValue/2); iCnt++)
    {
        if(iValue % iCnt == 0)
        { 
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    DisplayFactor(iNo);

    return 0;
}