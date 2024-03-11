#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char ch)
{
    bool bAns = false;
    if((ch == 'a') || (ch == 'A'))
    {
        bAns = true;
    }
    if((ch == 'e') || (ch == 'E'))
    {
        bAns = true;
    }
    if((ch == 'i') || (ch == 'I'))
    {
        bAns = true;
    }
    if((ch == 'o') || (ch == 'O'))
    {
        bAns = true;
    }
    if((ch == 'u') || (ch == 'U'))
    {
        bAns = true;
    }
    return bAns;    
}

int main()
{
    char cValue = 0, bRet = 0;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    if(bRet == true)
    {
        printf("%c is a vowel",cValue);
    }
    else
    {
        printf("%c is not a vowel",cValue);
    }

    return 0;
}