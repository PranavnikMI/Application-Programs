#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    public:
        struct node *First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(int No);
        int DeQueue();
        void Display();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue :: IsQueueEmpty()
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

void Queue :: EnQueue(int No)
{
    struct node *newn = new struct node;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node *temp = First; 
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

int Queue :: DeQueue()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty"<<"\n";
        return -1;
    }
    else
    {
        int Value = First->data;
        struct node *temp = First;
        First = First->next;
        delete temp;
        iCount--;
        return Value;
    }

}

void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty"<<"\n";
    }
    else
    {
        cout<<"Element in Queue is : "<<"\n";
        struct node *temp = First;
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
    Queue obj1;

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
    
    return 0;
}