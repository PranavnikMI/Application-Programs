#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct  node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    PNODE Temp = *First;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

void Display(PNODE First)
{
    printf("Element in LL is :\n ");
    while(First != NULL)
    {
        printf("| %d | => ",First->data);
        First = First->next;
    }
    printf("NULL");
}

int LargeDigit(int iNo)
{
    int iDigit = 0, iMax = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

void DisplayLargeDigit(PNODE First)
{
    int iRet = 0;
    printf("Large Digit in Number is :\n");
    while(First != NULL)
    {
        iRet = LargeDigit(First->data);
        printf("%d\t",iRet);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertLast(&Head,11);
    InsertLast(&Head,250);
    InsertLast(&Head,532);
    InsertLast(&Head,419);
   
    Display(Head);
    printf("\n");
    
    DisplayLargeDigit(Head);

    return 0;
}