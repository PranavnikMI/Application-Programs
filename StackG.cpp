#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class StackG
{
    public:
        struct node<T> *First;
        int iCount;
        
        StackG();

        bool IsStackEmpty();
        void Push(T No);
        T Pop();
        void Display();
};

template <class T>
StackG<T> :: StackG()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool StackG<T> :: IsStackEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void StackG<T> :: Push(T No)
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
T StackG<T> :: Pop()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty"<<"\n";
        return (T) -1;
    }
    else
    {
        struct node<T> *temp = First;
        T Value = First->data;

        First = First->next;
        delete temp;
        iCount--;
        return Value;
    }    
}

template <class T>
void StackG<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty"<<"\n";
    }
    else
    {
        cout<<"Element in stack are : "<<"\n";
        
        struct node<T> *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" | => ";
            temp = temp->next;
        }
        cout<<"NULL"<<"\n";
    }
}

int main()
{
    StackG <int>obj1;
    StackG <double>obj2;

    obj1.Push(11);
    obj1.Push(21);
    obj1.Push(51);
    obj1.Push(101);

    obj1.Display();

    int iRet = obj1.Pop();
    cout<<"Element Remove is : "<<iRet<<"\n";

    iRet = obj1.Pop();
    cout<<"Element Remove is : "<<iRet<<"\n";

    obj1.Display();
    cout<<"\n";

    obj2.Push(11.01);
    obj2.Push(21.23);
    obj2.Push(51.03);
    obj2.Push(101.45);

    obj2.Display();
    
    double dRet = obj2.Pop();
    cout<<"Element Remove is : "<<dRet<<"\n";

    dRet = obj2.Pop();
    cout<<"Element Remove is : "<<dRet<<"\n";

    obj2.Display();

    return 0;
}