#include<stdio.h>

void ReverseString(char *str)
{
    char *Temp = str;
    int iCnt = 0, iCount = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    for(iCnt = iCount - 1; iCnt >= 0; iCnt--)
    {
        printf("%c",Temp[iCnt]);
    }
}

int main()
{
    char Arr[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    ReverseString(Arr);

    return 0;
}