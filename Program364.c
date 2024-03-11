//  Count of Capital Charecter of string
#include<stdio.h>

int CountCapR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
        CountCapR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapR(Arr);
    printf("Count of Capital Charecter in String is : %d",iRet);

    return 0;
}