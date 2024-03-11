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

int AddEvenNumber(PNODE First)
{
    int iSum = 0;
    while(First != NULL)
    {
        if(First->data % 2 == 0)
        {
            iSum = iSum + First->data;
        }
        First = First->next;
    }
    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,11);
    InsertLast(&Head,20);
    InsertLast(&Head,32);
    InsertLast(&Head,41);
  
    Display(Head);
    printf("\n");
    
    iRet = AddEvenNumber(Head);
    printf("Addition of Even Number in Node is : %d",iRet);

    return 0;
}