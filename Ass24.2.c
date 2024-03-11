#include<stdio.h>

char ChangeCase(char ch)
{
    char cAns = '0';

    if(ch >= 'A' && ch <= 'Z')
    {
        cAns = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cAns = ch - 32;
    }
    else
    {
        cAns = ch;
    }
    return cAns;
}

int main()
{
    char cValue = '0', cRet = '0';

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    cRet = ChangeCase(cValue);
    printf("Opposite Case is %c",cRet);

    return 0;
}