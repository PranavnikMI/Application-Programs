//  Return Sum of Factor of Number
#include<stdio.h>

int SumFactorsR(int No)
{
    static int iCnt = 1;
    static int Sum = 0;

    if(iCnt <= (No/2))
    {
        if(No % iCnt == 0)
        {
            Sum = Sum + iCnt;
        }
        iCnt++;
        SumFactorsR(No);
    }
    return Sum;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter Number\n");
    scanf("%d",&Value);

    Ret = SumFactorsR(Value);
    printf("Sum of Factors is : %d",Ret);

    return 0;
}