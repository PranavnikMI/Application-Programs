// diaplay the EvenFactor for given Number
#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt = iCnt + 2)
        if((iNo % iCnt == 0)) 
        {
            printf("%d\n",iCnt);
        }  
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}