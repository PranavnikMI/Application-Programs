#include<stdio.h>

void DisplayReverse(char *str)
{
    char *Brr = NULL;
    Brr = str;
    int iCnt = 0, iCount = 0;
    while(*Brr != '\0')
    {
        iCount++;
        Brr++;
    }
    for(iCnt = iCount - 1; iCnt >= 0; iCnt--)
    {
        printf("%c",str[iCnt]);
    }
    
}

int main()
{
    char Arr[30];

    printf("Enter String : \n");
    scanf("%[^\n]s",&Arr);

    DisplayReverse(Arr);

    return 0;
}