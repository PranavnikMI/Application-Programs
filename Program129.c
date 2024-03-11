// cheak character is Capital or not using asky
#include<stdio.h>
#include<stdbool.h>

bool cheakCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))
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

    bRet = cheakCapital(cValue);
    if(bRet == true)
    {
        printf("%c is Capital case letter\n",cValue);
    }
    else
    {
        printf("%c is not Capital case letter\n",cValue);
    }

    return 0;
}