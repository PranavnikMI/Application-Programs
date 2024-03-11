#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Stack
{
    public:
        struct node *First;
        int iCount;
        
        Stack();

        bool IsStackEmpty();
        void Push(int No);
        int Pop();
        void Display();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

bool Stack :: IsStackEmpty()
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

void Stack :: Push(int No)
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
        newn->next = First;
        First = newn;
    }
    iCount++;
}

int Stack :: Pop()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty"<<"\n";
        return -1;
    }
    else
    {
        struct node *temp = First;
        int Value = First->data;

        First = First->next;
        delete temp;
        iCount--;
        return Value;
    }    
}

void Stack :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is Empty"<<"\n";
    }
    else
    {
        cout<<"Element in stack are : "<<"\n";
        
        struct node *temp = First;
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
    Stack obj1;

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

    return 0;
}