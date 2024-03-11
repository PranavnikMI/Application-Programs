// accept stirng from user and Change it into Upper case
#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;  
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);       // strlwr(100);

    printf("String after conversion is : %s\n",Arr);

    return 0;
}