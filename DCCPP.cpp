#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;
        int iCount;

        DoublyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPosition(int No, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

DoublyCL :: DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void DoublyCL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = Last = newn;
        Last->next = First;
    }
    else 
    {
        newn->next = First;
        First->prev = newn;
        First =newn;
        First->prev = Last;
        Last->next = First; 
    }
    iCount++;
}

void DoublyCL :: InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = Last = newn;
        Last->next = First;
    }
    else 
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
        Last->next = First;
        First->prev = Last;
    }
    iCount++;
}

void DoublyCL :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = Last = NULL;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = Last;
        Last->next = First;
    }
    iCount--;
}

void DoublyCL :: DeleteLast()
{ 
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = Last = NULL;
    }
    else
    {
        while(temp->next != Last)
        {
            temp = temp ->next;
        }
        temp->next = First;
        delete Last;
        Last = temp;
        First->prev = Last;
    }
    iCount--;
}

void DoublyCL :: InsertAtPosition(int No, int ipos)
{
    if(ipos < 1 || ipos > iCount + 1)
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(No);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        int iCnt = 0;
        PNODE newn = new NODE;
        PNODE temp = First;

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
        iCount++;
    }
}

void DoublyCL :: DeleteAtPosition(int ipos)
{
    if(ipos < 1 || ipos > iCount)
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        int iCnt = 0;
        PNODE temp = First;

        for(iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        iCount--;
    }
}

void DoublyCL :: Display()
{
    PNODE temp = First;
    cout<<"Elements of LL are :"<<"\n";

    cout<<" => ";
    do
    {
        cout<<" | "<<temp->data<<" | => ";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
}

int main()
{
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.Display();

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    obj.DeleteFirst();
    obj.Display();

    obj.DeleteLast();
    obj.Display();

    obj.InsertAtPosition(105,4);
    obj.Display();

    obj.DeleteAtPosition(4);
    obj.Display();

    cout<<"Elements in LL is : "<<obj.iCount<<"\n";
    return 0;
}