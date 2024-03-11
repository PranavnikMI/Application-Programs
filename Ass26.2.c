#include<stdio.h>

void DisplayCapital(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    DisplayCapital(Arr);

    return 0;
}