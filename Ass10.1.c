#include<stdio.h>
#define PI 3.14

float AreaCircle(float fNo)
{
    float fArea = 0;

    fArea = fNo*fNo*PI;
    
    return fArea;
}

int main()
{
    float fValue = 0, fRet = 0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    fRet = AreaCircle(fValue);
    printf("Area is : %f",fRet);

    return 0;
}