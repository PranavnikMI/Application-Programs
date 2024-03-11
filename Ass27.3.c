#include<stdio.h>

int CheckFirstIndex(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCnt++;
        str++;
    }
    return iCnt;
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

    iRet = CheckFirstIndex(Arr,cValue);
    printf("Index of First occurance of %c is : %d",cValue,iRet);
   
    return 0;
}