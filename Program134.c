// accept string from user and return length
#include<stdio.h>

int StrlenX(char *str)
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
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
  
    iRet = StrlenX(Arr);            // strlenX(100)
    printf("Number of character are %d \n",iRet);

    return 0;
}