// accept character from user and Change it into opposite case
#include<stdio.h>

char CharToggleX(char ch)
{
    if(ch >= 'A' && ch<= 'Z')
    {
        return ch + 32;
    }
    else if(ch >= 'a' && ch<= 'z')
    {
        return ch - 32;
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

    cRet = CharToggleX(cValue);

    printf("Toggled Chracter is : %c\n",cRet);

    return 0;
}