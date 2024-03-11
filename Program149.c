// accept character from user and Change it into Small
#include<stdio.h>

char ToLowerX(char ch)
{
    if(ch >= 'A' && ch<= 'Z')
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    cRet = ToLowerX(cValue);

    printf("Character in the Lower case is : %c\n",cRet);

    return 0;
}