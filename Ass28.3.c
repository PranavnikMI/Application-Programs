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

int AdditionAll(PNODE First)
{
    int iSum = 0;
    while(First != NULL)
    {
        iSum = iSum + First->data;
        First = First->next;
    }
    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,10);
    InsertLast(&Head,20);
    InsertLast(&Head,30);
    InsertLast(&Head,40);
  
    Display(Head);
    printf("\n");
    
    iRet = AdditionAll(Head);
    printf("Addition of all node is : %d",iRet);

    return 0;
}