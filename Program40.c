// diaplay the Number is revese using while loop
#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("_______________________________________________________\n");

    iCnt= iNo;                       //1
    while( iCnt >= 1)                //2
    {
        printf("%d\t",iCnt);         //4
        iCnt--;                     // 3
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