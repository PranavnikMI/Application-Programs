// accept name from user and display name
#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name\n");
    // scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);
  
    return 0;
}