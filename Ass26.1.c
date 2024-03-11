#include<stdio.h>

void DisplaySmall(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            printf("%c",*str+32);
        }
        else
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    DisplaySmall(Arr);

    return 0;
}