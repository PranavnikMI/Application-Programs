#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL)
    {
        *First = newn;
    } 
    else
    {
    (*First)->prev = newn;
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
    newn->prev = NULL;

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
        newn->prev = temp;
        temp->next = newn; 
    }
}

void DeleteFirst(PPNODE First)
{

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*First)->prev);
        (*First)->prev = NULL;
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
        *First = NULL;
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

void InsertAtPosition(PPNODE First, int No, int iPos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = *First;

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
        InsertLast(First, No);
    }
    else
    {
        newn = (PNODE) malloc(sizeof(NODE));

        newn->data = No;
        newn->prev = NULL;
        newn->next = NULL;

        for(iCnt =1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
    }
}

void DeleteAtPosition(PPNODE First,int iPos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp = *First;

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
        for(iCnt =1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

void Display(PNODE First)
{
    printf("Elements in LL are : \n");
    printf("NULL <=> ");
    while(First != NULL)
    {
        printf("| %d | <=> ",First->data);
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
    return iCnt++;
}


int main()
{
    int iRet = 0;
    PNODE Head = NULL; 

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);

    DeleteFirst(&Head);
    DeleteLast(&Head);

    Display(Head);

    InsertAtPosition(&Head,105,4);
    Display(Head);

    DeleteAtPosition(&Head,4);
    Display(Head);
    
    iRet = Count(Head);
    printf("Element in the LL is : %d \n",iRet);

    return 0;
}