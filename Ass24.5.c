#include<stdio.h>

void DisplayAll(char cNo)
{
   printf("Char : %c\nDecimal Value : %d\noctal Value : %o\nHexadecimal Value : %x",cNo,cNo,cNo,cNo);
}

int main()
{
    char cValue = '0';

    printf("Enter symbol : \n");
    scanf("%c",&cValue);

    DisplayAll(cValue);
   
    return 0;
}