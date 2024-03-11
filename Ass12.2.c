#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool bAns = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bAns = true;
            break;
        }
        iNo = iNo/10;
    }
    return bAns;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet == true)
    {
        printf("No Contain Zero");
    }
    else
    {
        printf("No not contain Zero");
    }

    return 0;
}