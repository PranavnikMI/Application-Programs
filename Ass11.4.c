#include<stdio.h>

int AddEvenRange(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    if(iNo1 >iNo2)
    {   printf("Invalid range");
        return 0;
    }

    if(iNo1 <= 0 || iNo2 <= 0)
    {
        printf("Invalid range");
        return 0;
    }

    for(iCnt = iNo1 ; iCnt <= iNo2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter 1st Number : \n");
    scanf("%d",&iValue1);

    printf("Enter 2nd Number : \n");
    scanf("%d",&iValue2);

    iRet = AddEvenRange(iValue1,iValue2);
    printf("Addition Even of Number in range is : %d",iRet);
 
    return 0;
}