#include<iostream>
using namespace std;

class Marvellous
{
    public:
        void fun();             //member function
        void gun();             //member function
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend class Marvellous;
};

void Marvellous::fun()              //member function
    {
        Demo obj;
        cout<<"value of i :"<<obj.i<<"\n";
        cout<<"value of j :"<<obj.j<<"\n";
        cout<<"value of k :"<<obj.k<<"\n";
    }      
void Marvellous::gun()             //member function
    {
        Demo obj;
        cout<<"value of i :"<<obj.i<<"\n";
        cout<<"value of j :"<<obj.j<<"\n";
        cout<<"value of k :"<<obj.k<<"\n";
    }        

int main()
{  
    Marvellous mobj;
    mobj.fun();
    mobj.gun();
    
    return 0;
}