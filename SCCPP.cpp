#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();

        void InsertFirst(int No);
        void InsertLast(int NO);
        void InsertAtPosition(int No, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
        int Count();
};

SinglyCL :: SinglyCL()
{
    First = NULL;
    Last = NULL;
}

void SinglyCL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

void SinglyCL :: InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = Last = newn;
        Last->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        Last->next = First;
    }
}

void SinglyCL :: DeleteFirst()
{
    PNODE temp = First;

    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if((First == Last))
    {
        delete First;
        First = Last = NULL;
    }
    else
    {
        First = First->next;
        delete temp;
        Last->next = First;
    }
}

void SinglyCL :: DeleteLast()
{
    PNODE temp = First;

    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if((First == Last))
    {
        delete First;
        First = Last = NULL;
    }
    else
    {
        while(temp->next->next != First)
        {
            temp = temp->next;
        }
        temp->next = First;
        delete Last;
        Last= temp;
    }
}

void SinglyCL :: InsertAtPosition(int no, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = First;

    iNodeCnt = Count();
    if((ipos < 1) || (ipos > iNodeCnt + 1))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt + 1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;

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

void SinglyCL :: DeleteAtPosition(int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp1 = First;
    PNODE temp2 = NULL;
    
    iNodeCnt = Count();
    if((ipos < 1) || (ipos > iNodeCnt))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        for(iCnt = 1; iCnt < ipos -1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        
        temp1->next = temp2->next;
        delete temp2;
    }
}

void SinglyCL :: Display()
{
    cout<<"Elements in the LL is : \n";
    do
    {
        cout<<" | "<<First->data<<" | => ";
        First = First->next;
    }while(First != Last->next);
    cout<<"\n";   
}

int SinglyCL :: Count()
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

    SinglyCL obj;

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

    obj.InsertAtPosition(105, 4);
    obj.Display();

    obj.DeleteAtPosition(4);
    obj.Display();

    iRet = obj.Count();
    cout<<"Totle Nodes in LL is : "<<iRet<<"\n";

    return 0;
}