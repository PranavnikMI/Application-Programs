#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if((*First == *Last))
    {
        free(*First);
        *First = *Last = NULL;
    }
    else
    {
        *First =( *First)->next;
        free(temp);
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
    else if((*First == *Last))
    {
        free(*First);
        *First = *Last = NULL;
    }
    else
    {
        while(temp->next->next != *First)
        {
            temp = temp->next;
        }
        temp->next = *First;
        free(*Last);
        *Last= temp;
    }
}

void InsertAtPosition(PPNODE First, PPNODE Last,int no, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = *First;

    iNodeCnt = Count(*First, *Last);
    if((ipos < 1) || (ipos > iNodeCnt + 1))
    {
        printf("Invalid Position");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,Last,no);
    }
    else if(ipos == iNodeCnt + 1)
    {
        InsertLast(First,Last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPosition(PPNODE First, PPNODE Last, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp1 = *First;
    PNODE temp2 = NULL;
    
    iNodeCnt = Count(*First, *Last);
    if((ipos < 1) || (ipos > iNodeCnt))
    {
        printf("Invalid Position");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        for(iCnt = 1; iCnt < ipos -1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        
        temp1->next = temp2->next;
        free(temp2);
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements in the LL is : ");
    do
    {
        printf(" | %d | => ", First->data);
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

    DeleteFirst(&Head, &Tail);
    Display(Head ,Tail);

    DeleteLast(&Head, &Tail);
    Display(Head ,Tail);

    InsertAtPosition(&Head, &Tail, 105, 4);
    Display(Head, Tail);

    DeleteAtPosition(&Head, &Tail, 4);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Totle Nodes in LL is : %d \n",iRet);

    return 0;
}