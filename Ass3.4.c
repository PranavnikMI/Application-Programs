#include<stdio.h>

char CaseChange(char ch)
{
    char cAns = 0;

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
        return 0;
    }
    return cAns;
}

int main()
{
    char cValue = 0, cRet = 0;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    cRet = CaseChange(cValue);
    printf("case of %c is change to : %c ",cValue,cRet);

    return 0;
}