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

int FirstOccurance(PNODE First,int iNo)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        if(First->data == iNo)
        {
            break;
        }
        First = First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0, iValue = 0;

    InsertLast(&Head,10);
    InsertLast(&Head,20);
    InsertLast(&Head,30);
    InsertLast(&Head,40);
    InsertLast(&Head,50);
    InsertLast(&Head,30);
    InsertLast(&Head,70);

    Display(Head);
    printf("\n");
    
    printf("Enter CheakOccurance Number : \n");
    scanf("%d",&iValue);

    iRet = FirstOccurance(Head,iValue);
    printf("First occurance of %d is : %d",iValue,iRet);

    return 0;
}