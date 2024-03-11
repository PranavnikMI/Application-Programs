#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE temp = *First;

    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {   
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First == NULL;
    }
    else
    {
        *First = (*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First == NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPosition(PPNODE First,int No, int iPos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp =*First;

    iNodeCnt = Count(*First);

    if((iPos < 1) || (iPos > iNodeCnt + 1))
    {
        printf("Invalid Position");
        return;
    }  
    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == iNodeCnt + 1)
    {
        InsertLast(First,No);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPosition(PPNODE First, int iPos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    iNodeCnt = Count(*First);

    if((iPos < 1) || (iPos > iNodeCnt))
    {
        printf("Invalid Position");
        return;
    }  
    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}

void Display(PNODE First)
{
    printf("Element of LL are : \n");
    while(First != NULL)
    {
        printf("| %d | => ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);

    InsertLast(&Head,111);
    InsertLast(&Head,121);
    InsertLast(&Head,151);

    Display(Head);

    DeleteFirst(&Head);
    DeleteLast(&Head);

    Display(Head);

    InsertAtPosition(&Head,131,5);
    Display(Head);

    DeleteAtPosition(&Head,5);
    Display(Head);

    iRet = Count(Head);
    printf("Number of Nodes in LL is : %d ",iRet);

    return 0;
}