#include<stdio.h>

void DisplayExamTime(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your Exam at 7 AM");
    }
    if(ch == 'B' || ch == 'b')
    {
        printf("Your Exam at 8:30 AM");
    }
    if(ch == 'C' || ch == 'c')
    {
        printf("Your Exam at 9:20 AM");
    }
    if(ch == 'D' || ch == 'd')
    {
        printf("Your Exam at 10:30 AM");
    }
}

int main()
{
    char cValue = '0';
   
    printf("Enter Division :\n");
    scanf("%c",&cValue);

    DisplayExamTime(cValue);

    return 0;
}