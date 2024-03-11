// accept string from user and display length
#include<stdio.h>

int StrlenX(char str[])
{
    int iCnt = 0, i = 0;

    while(str[i] != '\0')
    {
        iCnt++;
        i++;
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
    printf("Number of characters are %d \n",iRet);

    return 0;
}