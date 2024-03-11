#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",(iCnt % 9)+1);
            iCnt++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns : \n");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);
}