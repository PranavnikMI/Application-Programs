#include<stdio.h>

float Area(float fNo1,float fNo2)
{
    float fArea = 0;

    fArea = fNo1*fNo2;
    
    return fArea;
}

int main()
{
    float fValue1 = 0, fValue2 = 0, fRet = 0;

    printf("Enter Height : \n");
    scanf("%f",&fValue1);

    printf("Enter Weight : \n");
    scanf("%f",&fValue2);

    fRet = Area(fValue1,fValue2);
    printf("Area is : %f",fRet);

    return 0;
}