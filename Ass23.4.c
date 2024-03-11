#include<stdio.h>
#include<stdbool.h>

bool CheakSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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
    char cValue = '0';
    bool bRet = false;

    printf("Enter Charecter :\n");
    scanf("%c",&cValue);

    bRet = CheakSmall(cValue);
    if(bRet == true)
    {
        printf("Alphabet is Small");
    }
    else
    {
        printf("Alphabet is not Small");
    }

    return 0;
}