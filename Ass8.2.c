#include<stdio.h>

void PrintDigitValue(int iNo)
{
    switch (iNo)
    {
        case (0):
            printf("Zero");
            break;
        case (1):
            printf("one");
            break;
        case (2):
            printf("two");
            break;
        case (3):
            printf("three");
            break;
        case (4):
            printf("four");
            break;
        case (5):
            printf("five");
            break;
        case (6):
            printf("six");
            break;
        case (7):
            printf("seven");
            break;
        case (8):
            printf("Eight");
            break;
        case (9):
            printf("nine");
            break; 
        default:
            printf("Invalid position");
            break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrintDigitValue(iValue);
    
    return 0;
}