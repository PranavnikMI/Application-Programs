#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char cValue = '0';
    bool bRet = false;

    printf("Enter symbol : \n");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);
    if(bRet == true)
    {
        printf("Special Symbol");
    }
    else
    {
        printf("No Special Symbol");
    }

    return 0;
}