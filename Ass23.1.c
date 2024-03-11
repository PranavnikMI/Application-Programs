#include<stdio.h>
#include<stdbool.h>

bool CheakAlphabet(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = CheakAlphabet(cValue);
    if(bRet == true)
    {
        printf("Charecter is Alphabet");
    }
    else
    {
        printf("Charecter is not Alphabet");
    }

    return 0;
}