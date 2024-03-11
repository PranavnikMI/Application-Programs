#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    public:
        PNODE First;
        int iCount;

        DoublyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPosition(int No ,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);

        void Display();
};

DoublyLL :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->prev = NULL;
    newn ->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void DoublyLL :: InsertLast(int No)
{
    PNODE temp = First;
    PNODE newn = new NODE;

    newn->data = No;
    newn->prev = NULL;
    newn ->next = NULL;

    if(First == NULL)
    {
        First = newn;
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
    iCount++;
}

void DoublyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
    }
    iCount--;
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = First;

    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLL :: InsertAtPosition(int No, int iPos)
{
    if(iPos < 1 || iPos > iCount + 1)
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE temp = First;
        PNODE newn = new NODE;
        int iCnt = 0;

        newn->data = No;
        newn->prev = NULL;
        newn->next = NULL;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

void DoublyLL :: DeleteAtPosition(int iPos)
{
    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount )
    {
        DeleteLast();
    }
    else
    {
        int iCnt = 0;
        PNODE temp1 = First;
        PNODE temp2 = NULL;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        delete temp2;
        iCount--;
    }
    
}

void DoublyLL :: Display()
{
    cout<<"Element in LL are \n";
    PNODE temp = First;
    cout<<"NULL <=>";
    while(temp != NULL)
    {
        printf(" | %d |  <=> ",temp->data);
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main()
{
    DoublyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    obj.InsertAtPosition(105,4);
    obj.Display();

    obj.DeleteAtPosition(4);
    obj.Display();

    cout<<"Numbers of Nodes in LL is "<<obj.iCount<<"\n";

    return 0;
}