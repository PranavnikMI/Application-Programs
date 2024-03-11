#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCG
{
    public:
        struct node<T> *First;
        struct node<T> *Last;
        int iCount;

        SinglyCG();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
};

template <class T>
SinglyCG<T> :: SinglyCG()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCG<T> ::InsertFirst(T No)
{
    struct node<T> *newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = First;
    }
    iCount++;
}

template <class T>
void SinglyCG<T> ::InsertLast(T No)
{
    struct node<T> *newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last -> next = newn;
        Last = newn;
        Last ->next = First;
    }
    iCount++;
}

template <class T>
void SinglyCG<T> ::InsertAtPos(T No, int iPos)
{
    if(iPos < 1 && iPos > iCount +1)
    {
        cout<<"Invalid Position"<<"\n";
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
        struct node<T> *newn = new struct node<T>;
        struct node<T> *temp = First;

        newn -> data = No;
        newn->next = NULL;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn ->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void SinglyCG<T> ::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Empty LL"<<"\n";
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
        iCount--;
    }
    else
    {
        First = First ->next;
        delete Last->next;
        Last->next = First;
        iCount--;
    }
}

template <class T>
void SinglyCG<T> ::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Empty LL"<<"\n";
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
        iCount--;
    }
    else
    {
        struct node<T> *temp = First;

        while(temp->next->next != First)
        {
            temp = temp->next;
        }
        Last = temp;
        delete Last->next;
        Last->next = First;
        iCount--;
    }
}

template <class T>
void SinglyCG<T> ::DeleteAtPos(int iPos)
{
    if(iPos < 1 && iPos > iCount )
    {
        cout<<"Invalid Position"<<"\n";
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
        struct node<T> *temp1 = First;
        struct node<T> *temp2 = NULL;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2 ->next;
        delete temp2;
        iCount--;
    }

}

template <class T>
void SinglyCG<T> ::Display()
{
    struct node<T> *temp = First;
    cout<<"Element in LL is :"<<"\n";

    do
    {
        cout<<"| "<<temp->data<<" | => ";
        temp = temp->next;
    }while(temp != First);
    
    cout<<"\n";
}

int main()
{
    SinglyCG <int>obj1;
    SinglyCG <double>obj2;
    
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.Display();

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    obj1.Display();

    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.Display();

    obj1.InsertAtPos(105,4);
    obj1.Display();

    obj1.DeleteAtPos(4);
    obj1.Display();

    cout<<" Elements of LL is : " <<obj1.iCount<<"\n";
    cout<<"\n";

    obj2.InsertFirst(51.01);
    obj2.InsertFirst(21.02);
    obj2.InsertFirst(11.03);
    obj2.Display();

    obj2.InsertLast(101.12);
    obj2.InsertLast(111.12);
    obj2.InsertLast(121.17);
    obj2.Display();

    obj2.DeleteFirst();
    obj2.DeleteLast();
    obj2.Display();

    obj2.InsertAtPos(105.113,4);
    obj2.Display();

    obj2.DeleteAtPos(4);
    obj2.Display();

    cout<<" Elements of LL is : " <<obj2.iCount<<"\n";

    return 0;
}