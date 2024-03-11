#include<stdio.h>
#include<stdbool.h>

bool CheakDigit(char ch)
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
    char cValue = '0';
    bool bRet = false;

    printf("Enter Charecter :\n");
    scanf("%c",&cValue);

    bRet = CheakDigit(cValue);
    if(bRet == true)
    {
        printf("Charecter is Digit");
    }
    else
    {
        printf("Charecter is not Digit");
    }

    return 0;
}