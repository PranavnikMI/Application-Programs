#include<stdio.h>

void DisplayEvenNumber(int iValue)
{
    int iCnt = 0;
    printf("Given Number of Even is : \n");

    for(iCnt = 2; iCnt <= iValue * 2; iCnt+=2)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iNo = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    DisplayEvenNumber(iNo);

    return 0;
}