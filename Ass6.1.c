#include<stdio.h>

int main()
{
    char ch[30];

    printf("Enter the name : ");
    scanf("%[^'\n']s",&ch);

    printf("Name is : %s",ch);
    return 0;
}