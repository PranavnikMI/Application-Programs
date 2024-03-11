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

int Minimum(PNODE Rome)
{
    int iMin = Rome->data;
    while(Rome != NULL)
    {
        if(Rome->data < iMin)
        {
            iMin = Rome->data;
        }
        Rome = Rome->next;
    }
    return iMin;
}

int SecondMax(PNODE First)
{
    int iSmax = Minimum(First); 
    int iMax = First->data;
    while(First != NULL)
    {
        if(First->data >= iMax)
        {
            iMax = First->data;
        }
        else
        {
            if(First->data > iSmax)
            {
                iSmax = First->data;
            }
        }
        First = First->next;
    }
    return iSmax;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,110);
    InsertLast(&Head,230);
    InsertLast(&Head,320);
    InsertLast(&Head,240);
  
    Display(Head);
    printf("\n");
    
    iRet = SecondMax(Head);
    printf("Second Maximum Number in Node is : %d",iRet);

    return 0;
}