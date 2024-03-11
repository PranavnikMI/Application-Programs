// accept string from user and return no of a
#include<stdio.h>

int CountCh(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt++;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Plese enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCh(Arr);
    printf("frequency of a is : %d  ",iRet);

    return 0;
}