#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class QueueG
{
    public:
        struct node<T> *First;
        int iCount;

        QueueG();

        bool IsQueueEmpty();
        void EnQueue(T No);
        T DeQueue();
        void Display();
};

template <class T>
QueueG<T> :: QueueG()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool QueueG<T> :: IsQueueEmpty()
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
void QueueG<T> :: EnQueue(T No)
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
T QueueG<T> :: DeQueue()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty"<<"\n";
        return (T) -1;
    }
    else
    {
        T Value = First->data;
        struct node<T> *temp = First;
        First = First->next;
        delete temp;
        iCount--;
        return Value;
    }

}

template <class T>
void QueueG<T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty"<<"\n";
    }
    else
    {
        cout<<"Element in Queue is : "<<"\n";
        struct node<T> *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" | => ";
            temp = temp->next;
        }
        cout<<"\n";
    }
}

int main()
{
    QueueG <int>obj1;
    QueueG <double>obj2;

    obj1.EnQueue(11);
    obj1.EnQueue(21);
    obj1.EnQueue(51);
    obj1.EnQueue(101);

    obj1.Display();

    int iRet = obj1.DeQueue();
    cout<<"Remove Element is : "<<iRet<<"\n";

    iRet = obj1.DeQueue();
    cout<<"Remove Element is : "<<iRet<<"\n";

    obj1.Display();
    cout<<"\n";

    obj2.EnQueue(11.11);
    obj2.EnQueue(21.34);
    obj2.EnQueue(51.09);
    obj2.EnQueue(101.53);

    obj2.Display();

    double dRet = obj2.DeQueue();
    cout<<"Remove Element is : "<<dRet<<"\n";

    dRet = obj2.DeQueue();
    cout<<"Remove Element is : "<<dRet<<"\n";

    obj2.Display();
    
    return 0;
}