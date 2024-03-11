#include<stdio.h>

int DifferenceSmallCapFreq(char *str)
{
    int iSCnt = 0, iCCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A'  && *str <= 'Z')
        {
            iCCnt++;
        }
        else
        {
            iSCnt++;
        }
        str++;
    }
    return iSCnt - iCCnt;
}

int main()
{
    char ch[30];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s",&ch);

    iRet = DifferenceSmallCapFreq(ch);
    printf("Difference B/W Capital and Small letter Count is : %d",iRet);

    return 0;
}