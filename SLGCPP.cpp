#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLG
{
    public:
        struct node <T> *First;
        int iCount;

        SinglyLG();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
};

template <class T>
SinglyLG <T> ::  SinglyLG()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLG <T> :: InsertFirst(T No)
{
    struct node<T> *newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLG <T> :: InsertLast(T No)
{
    struct node<T> *newn = new struct node<T>;

    newn->data = No;
    newn->next = NULL;

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
    }
    iCount++;
}

template <class T>
void SinglyLG <T> :: InsertAtPos(T No, int iPos)
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

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLG <T> :: DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"LL is Empty"<<"\n";
        return;
    }
    else if(First ->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct node<T> *temp = First;
        First = First->next;
        delete temp;
        iCount--;
    }
}

template <class T>
void SinglyLG <T> :: DeleteLast()
{
    if(First == NULL)
    {
        cout<<"LL is Empty"<<"\n";
        return;
    }
    else if(First ->next == NULL)
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
void SinglyLG <T> :: DeleteAtPos(int iPos)
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
        struct node<T> *temp1 = First;
        struct node<T> *temp2 = NULL;

        for(int iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}

template <class T>
void SinglyLG <T> :: Display()
{
    cout<<"Element in LL is : "<<"\n";

    struct node<T> *temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | => ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main()
{
    SinglyLG <int>obj1;
    SinglyLG <double>obj2;

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