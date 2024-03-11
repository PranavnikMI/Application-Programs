// Display the Non factors of given number
#include<stdio.h>

void DisplayNonFactcor(int iNo)
{
    int iCnt = 0;

    printf("Non Factor of %d are : \n",iNo);
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    } 
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayNonFactcor(iValue);

    return 0;
}