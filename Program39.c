// diaplay the Number is revese using For loop
#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("_______________________________________________________\n");
    //       1          2       3
    for(iCnt= iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);       // 4
    }
    printf("\n_______________________________________________________");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}