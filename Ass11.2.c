#include<stdio.h>

void DisplayEvenRange(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 >iNo2)
    {
        printf("Invalid range");
        return;
    }

    printf("Even Number in B/W %d ans %d is : \n",iNo1,iNo2);
    for(iCnt = iNo1 ; iCnt <= iNo2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter 1st Number : \n");
    scanf("%d",&iValue1);

    printf("Enter 2nd Number : \n");
    scanf("%d",&iValue2);

    DisplayEvenRange(iValue1,iValue2);

    return 0;
}