// accept string from user and return no of of Capital letter
#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);
    printf("frequency of Capital letter is : %d  ",iRet);

    return 0;
}