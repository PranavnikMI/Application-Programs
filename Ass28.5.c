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

int MinNumber(PNODE First)
{
    int iMin = First->data;
    while(First != NULL)
    {
        if(First->data < iMin)
        {
            iMin = First->data;
        }
        First = First->next;
    }
    return iMin;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,110);
    InsertLast(&Head,230);
    InsertLast(&Head,20);
    InsertLast(&Head,320);
    InsertLast(&Head,240);
  
    Display(Head);
    printf("\n");
    
    iRet = MinNumber(Head);
    printf("Minimum Number is : %d",iRet);

    return 0;
}