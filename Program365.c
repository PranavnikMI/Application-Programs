//  Count of Small Charecter of string
#include<stdio.h>

int CountSmallR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        CountSmallR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmallR(Arr);
    printf("Count of Small Charecter in String is : %d",iRet);

    return 0;
}