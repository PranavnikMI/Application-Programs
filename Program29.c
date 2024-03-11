// Addition of N number
#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
        //1           2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;          //4
    }

    return iSum; 
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);
    
    iRet = Summation(iValue);

    printf(" Summation is : %d \n",iRet);

    return 0;
}