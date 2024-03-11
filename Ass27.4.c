#include<stdio.h>

int CheckLastIndex(char *str, char ch)
{
    int iCnt = 0, iAns = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iAns = iCnt;
        }
        iCnt++;
        str++;
    }
    return iAns;
}

int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);

    iRet = CheckLastIndex(Arr,cValue);
    printf("Index of Last occurance of %c is : %d",cValue,iRet);
   
    return 0;
}