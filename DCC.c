#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->prev = *Last;
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*First)->prev);
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = *Last = NULL;
    }
    else
    {
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        temp->next = (*Last)->next;
        free(*Last);
        *Last = temp;
        (*First)->prev = *Last;
    }
}

void InsertAtPosition(PPNODE First, PPNODE Last, int No, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = *First;

    iNodeCnt = Count(*First, *Last);
    
    if((ipos < 1) || (ipos > iNodeCnt + 1))
    {
        printf("Invalid Position \n");
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if(ipos == iNodeCnt + 1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->prev = NULL;
        newn->next = NULL;

        for(iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        temp->next->prev = temp;
    }
}

void DeleteAtPosition(PPNODE First, PPNODE Last, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp = *First;

    iNodeCnt = Count(*First, *Last);
    
    if((ipos < 1) || (ipos > iNodeCnt))
    {
        printf("Invalid Position \n");
        return;
    }
    
    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(ipos == iNodeCnt )
    {
        DeleteLast(First, Last);
    }
    else
    {
        
        for(iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }        
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of LL is : \n");

    printf("<=> ");
    do
    {
        printf(" | %d | <=> ",First->data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;

    do
    {
        iCnt++;
        First = First->next;
    }while(First != Last->next);
    return iCnt;
}

int main()
{
    int iRet = 0;

    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    Display(Head, Tail);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    InsertAtPosition(&Head,&Tail,105,4);
    Display(Head,Tail);

    DeleteAtPosition(&Head,&Tail,4);
    Display(Head,Tail);

    iRet = Count(Head, Tail);
    printf("Total Nodes in LL is : %d",iRet);

}