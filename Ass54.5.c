#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';
    static int iCnt = 1;
    
    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}