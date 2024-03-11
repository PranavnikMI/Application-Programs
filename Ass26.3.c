#include<stdio.h>

void DisplayOppositeCase(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            printf("%c",*str+32);
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            printf("%c",*str-32);
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

    DisplayOppositeCase(Arr);

    return 0;
}