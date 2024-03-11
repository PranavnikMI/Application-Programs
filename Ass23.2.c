#include<stdio.h>
#include<stdbool.h>

bool CheakCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheakCapital(cValue);
    if(bRet == true)
    {
        printf("Alphabet is Capital");
    }
    else
    {
        printf("Alphabet is not Capital");
    }

    return 0;
}