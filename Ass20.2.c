#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 ='A', ch2 = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {
                printf("%c\t",ch2);
                ch2++;
            }
        }
        ch1 = 'A';
        ch2 = 'a';
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