#include<stdio.h>
#include<stdbool.h>

bool CheckApperance(char *str, char ch)
{
    bool bAns = false;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bAns = true;
            break;
        }
        str++;
    }
    return bAns;
}

int main()
{
    char Arr[30];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);

    bRet = CheckApperance(Arr,cValue);
    if(bRet == true)
    {
        printf("%c is present in given string",cValue);
    }
    else
    {
        printf("%c is not Present in Given string",cValue);
    }
    
    return 0;
}