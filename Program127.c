// cheak character is small or not using asky
#include<stdio.h>
#include<stdbool.h>

bool cheakSmall(char ch)
{
    if((ch >= 97) && (ch <= 122))
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

    bRet = cheakSmall(cValue);
    if(bRet == true)
    {
        printf("%c is small case letter\n",cValue);
    }
    else
    {
        printf("%c is not small case letter\n",cValue);
    }

    return 0;
}