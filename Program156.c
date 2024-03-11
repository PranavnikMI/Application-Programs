// accept string from user and copy it into another string
#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
    *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20]; 

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);    // strcpyX(100,200);

    printf("Copied String is : %s\n",Brr);

    return 0;
}