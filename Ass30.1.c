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

int DigitCount(int iValue)
{
    int iCnt = 0;
    while(iValue != 0)
    {
        iCnt++;
        iValue = iValue / 10;
    }
    return iCnt;
}

int CheckSquare(int iValuex)
{
    int j = 0, iMult = 1;
    for(j = 1; j < iValuex; j++)
    {
        iMult = iMult * 10;
    }
    return iMult;
}

int DisplayRevDigit(int iNo)
{
    int iDigit = 0, iAns = 0, iSum = 0, iValue =0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iValue = DigitCount(iNo);
        iAns = iDigit * CheckSquare(iValue);
        iSum = iSum + iAns;
        iNo = iNo / 10;
    }
    return iSum;
}

void DisplayRevDigitNode(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | => ",DisplayRevDigit(First->data));
        First = First->next;
    }
    printf("NULL");
}

int main()
{
    PNODE Head = NULL;
    
    InsertLast(&Head,1121);
    InsertLast(&Head,2324);
    InsertLast(&Head,206);
    InsertLast(&Head,2405);
    InsertLast(&Head,6498);
  
    Display(Head);
    printf("\n");
    
    DisplayRevDigitNode(Head);

    return 0;
}