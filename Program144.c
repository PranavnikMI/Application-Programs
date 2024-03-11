// accept string from user and return no of of Capital letter
// solution
#include<stdio.h>

int CountCapital(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == ch))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt++;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Plese enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character \n");
    scanf(" %c",&cValue); 

    iRet = CountCapital(Arr,cValue);

    printf("frequency of lette is : %d  ",iRet);

    return 0;
}