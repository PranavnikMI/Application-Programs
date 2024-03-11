#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[30];

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    iRet = CountSpace(Arr);
    printf("Count of white Space is : %d",iRet);

    return 0;
}