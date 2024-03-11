#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fTotal = 0.0;

    fTotal = iNo2 / iNo1;
    return fTotal;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter the total marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the marks you got : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is : %f ",fRet);

    return 0;
}