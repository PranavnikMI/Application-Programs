#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0; 
    BOOL bRet = FALSE;

    printf("Enter Number one : \n");
    scanf("%d",&iValue1);

    printf("Enter Number two : \n");
    scanf("%d",&iValue2);

    bRet = Check(iValue1, iValue2);
    if(bRet == TRUE)
    {
        printf("Same");
    }
    else
    {
        printf("Not Same");
    }

    return 0;
}