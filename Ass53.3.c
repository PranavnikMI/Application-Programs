#include<stdio.h>

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        iCnt++;
        Display();
        printf("%d\t",--iCnt);
    }
}

int main()
{
    Display();

    return 0;
}