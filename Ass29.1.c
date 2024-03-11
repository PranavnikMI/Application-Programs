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

int CheakPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

void PerfectNumber(PNODE First)
{
    int iRet = 0;
    printf("Perfect Number in LL is : \n");
    while(First != NULL)
    {
        iRet = CheakPerfect(First->data);
        if(iRet == First->data)
        {
            printf("%d\t",First->data);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertLast(&Head,11);
    InsertLast(&Head,28);
    InsertLast(&Head,17);
    InsertLast(&Head,41);
    InsertLast(&Head,6);
    InsertLast(&Head,89);
  
    Display(Head);
    printf("\n");
    
    PerfectNumber(Head);

    return 0;
}