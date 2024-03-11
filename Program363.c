//  return length of string
#include<stdio.h>

int StrlenR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrlenR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenR(Arr);
    printf("Length of String is : %d",iRet);

    return 0;
}