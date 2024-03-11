//  check Number is perfect or not
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int No)
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
        CheckPerfectR(No);
    }
    if(Sum == No)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Value = 0;
    bool Ret = false;

    printf("Enter Number\n");
    scanf("%d",&Value);

    Ret = CheckPerfectR(Value);
    if(Ret == true)
    {
        printf("%d is Perfect Number",Value);
    }
    else
    {
        printf("%d is not Perfect Number",Value);
    }

    return 0;
}