#include<stdio.h>

void DisplaySequence(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        printf("Invalid Charecter");
    }
}

int main()
{
    char cValue = '0';

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    DisplaySequence(cValue);

    return 0;
}