#include<stdio.h>

int CheckCapital(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A'  && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char ch[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s",&ch);

    iRet = CheckCapital(ch);
    printf("Number of Capital letter is : %d",iRet);

    return 0;
}