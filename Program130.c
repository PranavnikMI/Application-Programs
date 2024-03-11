// cheak character is Digit or not 
#include<stdio.h>
#include<stdbool.h>

bool cheakDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter one character\n");
    scanf("%c",&cValue);

    bRet = cheakDigit(cValue);
    if(bRet == true)
    {
        printf("%c is Digit letter\n",cValue);
    }
    else
    {
        printf("%c is not Digit letter\n",cValue);
    }

    return 0;
}