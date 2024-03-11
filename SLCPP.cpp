#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPosition(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int iPos);

        void Display();
};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

void SinglyLL :: InsertLast(int No)
{
    PNODE temp = NULL;
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next; 
        }
        temp->next = newn;
        iCount++;
    }
}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        iCount--;
    }
    else
    {
        PNODE temp = NULL;
        temp = First;
        First = temp->next;
        delete temp;
        iCount--;
    }
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        iCount--;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

void SinglyLL :: InsertAtPosition(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        PNODE temp = First;
        int iCnt = 0;

        newn->data = iNo; 
        newn->next = NULL;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn ->next = temp->next;
        temp->next = newn;
        iCount++; 
    }
}

void SinglyLL :: DeleteAtPosition(int iPos)
{
    if((iPos < 1) || (iPos > iCount ))
    {
        cout<<"Invalid Position \n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = First;
        PNODE temp2 = NULL;
        int iCnt = 0;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}

void SinglyLL :: Display()
{
    cout<<"Elements of Array are : "<<"\n";

    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | => ";
        temp = temp->next;
    }
    cout<<"NULL \n";
}

int main()
{
    SinglyLL obj;

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

    cout<<" Elements of LL is : " <<obj.iCount<<"\n";
    return 0;
}