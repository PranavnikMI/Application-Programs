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

int CheakTotal(int iValuex)
{
    int iCnt = 0;
    while(iValuex != 0)
    {
        iCnt++;
        iValuex = iValuex / 10;
    }
    return iCnt;
}

int CheckSquare(int iValue)
{
    int i = 0, iMult = 1;
    for(i = 1; i < iValue; i++)
    {
        iMult = iMult * 10;
    }
    return iMult;
}

int CheckPalindrome(int iNo)
{
    int iDigit = 0, iSum = 0, iAns = 0, iValue = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iValue = CheakTotal(iNo);
        iAns = iDigit * CheckSquare(iValue);
        iSum = iSum + iAns;
        iNo = iNo / 10;
    }
    return iSum;
}

void DisplayPalindrome(PNODE First)
{
    printf("Pallindrome Number is : \n");
    while(First != NULL)
    {
        if(First->data == CheckPalindrome(First->data))
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
    InsertLast(&Head,414);
    InsertLast(&Head,6);
    InsertLast(&Head,89);
  
    Display(Head);
    printf("\n");
    
    DisplayPalindrome(Head);

    return 0;
}