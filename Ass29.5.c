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

int CheakDigitSum(int iNo)
{
    int iSum = 0, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        iSum = iSum +iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

void DisplaySumDigit(PNODE First)
{
    int iRet = 0;
    printf("Sum of Digit of Number in LL is : \n");
    while(First != NULL)
    {
        iRet = CheakDigitSum(First->data);
        printf("%d => %d\n",First->data,iRet);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertLast(&Head,110);
    InsertLast(&Head,230);
    InsertLast(&Head,20);
    InsertLast(&Head,240);
    InsertLast(&Head,640);
  
    Display(Head);
    printf("\n");
    
    DisplaySumDigit(Head);

    return 0;
}