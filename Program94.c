// input : 4
// Output : 1 * 2 * 3 * 4 *
#include<stdio.h>

void Display(int iNo)    // N
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);        // Dynamic
        printf("*\t");              //static
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}