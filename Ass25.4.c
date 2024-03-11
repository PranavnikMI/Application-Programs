#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    bool bAns = false;

    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'a')
        {
            bAns = true;
        }
        if(*str == 'E' || *str == 'e')
        {
            bAns = true;
        }
        if(*str == 'I' || *str == 'i')
        {
            bAns = true;
        }
        if(*str == 'O' || *str == 'o')
        {
            bAns = true;
        }
        if(*str == 'U' || *str == 'u')
        {
            bAns = true;
        }
        *str++;
    }
    return bAns;
}

int main()
{
    char Arr[30];
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^\n]s",&Arr);

    bRet = CheckVowel(Arr);
    if(bRet == true)
    {
        printf("Vowel is there");
    }
    else
    {
        printf("No vowel");
    }

    return 0;
}