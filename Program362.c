//  return length of string
#include<stdio.h>

int StrlenI(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenI(Arr);
    printf("Length of String is : %d",iRet);

    return 0;
}