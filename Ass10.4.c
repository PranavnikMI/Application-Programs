#include<stdio.h>

double ConvertCelcius(float fNo)
{
    double dAns = 0.0;

    dAns = (fNo - 32)* (5)/9;
    
    return dAns;
}

int main()
{
    float fValue = 0.0; 
    double dRet = 0.0;

    printf("Enter temp in Faheran : \n");
    scanf("%f",&fValue);

    dRet = ConvertCelcius(fValue);
    printf("Celcius temp is : %lf",dRet);

    return 0;
}