#include<iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node *prev;
    struct node *next;
};

template <class T>
class DoublyLG
{
    public:
        struct node<T> *First;
        int iCount;

        DoublyLG();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
};

template <class T>
DoublyLG<T> :: DoublyLG()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLG<T> :: InsertFirst(T No)
{
    struct node<T> *newn = new struct node<T>;
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

template <class T>
void DoublyLG<T> :: InsertLast(T No)
{
    struct node<T> *newn = new struct node<T>;
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node<T> *temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void DoublyLG<T> :: InsertAtPos(T No, int iPos)
{
    if(iPos < 1 || iPos > iCount + 1)
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
        struct node<T> *temp = First;
        struct node<T> *newn = new struct node<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void DoublyLG<T> :: DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"Empty LL"<<"\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
        iCount--;
    }
}

template <class T>
void DoublyLG<T> :: DeleteLast()
{
    if(First == NULL)
    {
        cout<<"Empty LL"<<"\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct node<T> *temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

template <class T>
void DoublyLG<T> :: DeleteAtPos(int iPos)
{
    if(iPos < 1 || iPos > iCount)
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
        struct node<T> *temp = First;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp ->next;
        }
        temp->next =temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        iCount--;
    }
}

template <class T>
void DoublyLG<T> :: Display()
{
    cout<<"Element in LL is : "<<"\n";
    
    struct node<T> *temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    DoublyLG <int>obj1;
    DoublyLG <double>obj2;

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

    cout<<"Element in LL is : "<<obj1.iCount<<"\n";
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