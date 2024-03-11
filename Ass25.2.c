#include<stdio.h>

int CheckSmall(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'a'  && *str <= 'z')
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

    iRet = CheckSmall(ch);
    printf("Number of Small letter is : %d",iRet);

    return 0;
}