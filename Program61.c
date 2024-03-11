// take a Number from user and reverse the Number and cheak palindrom or not using two function approch
#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev =0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int CheckPallindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    return (iReverse == iData);
}

int main()
{
    int iValue = 0; 
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("%d is pallindrome number \n",iValue);
    }
    else
    {
        printf("%d is not a pallindrome number \n",iValue);
    }
    return 0;
}
