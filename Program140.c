// accept string from user and return no of of small letter
#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);
    printf("frequency of small letter is : %d  ",iRet);

    return 0;
}