#include<stdio.h>

double ConvertArea(int iNo)
{
    double dAns = 0.0;

    dAns = iNo * 0.0929 ;
    
    return dAns;
}

int main()
{
    int iValue = 0; 
    double dRet = 0.0;

    printf("Enter Area : \n");
    scanf("%d",&iValue);

    dRet = ConvertArea(iValue);
    printf("Area in square meter is : %lf",dRet);

    return 0;
}