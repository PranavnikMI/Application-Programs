// accept string from user and character and check thar character is in string or not using flag
#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == ch))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Plese enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character \n");
    scanf(" %c",&cValue); 

    bRet = CheckChar(Arr,cValue);
    
    if(bRet == true)
    {
        printf("%c is present in string",cValue);
    }
    else
    {
        printf("%c is not present in string",cValue);
    }

    return 0;
}