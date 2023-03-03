#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
       
};

class Derived : public Base
{
    public:
       void fun()
       {
           cout<<"value of public i of Base :"<<i<<"\n";       //A
           cout<<"value of private j of Base :"<<j<<"\n";      //NA
           cout<<"value of protected k of Base :"<<k<<"\n";     //A

       }
};

int main()
{
    Derived dobj;
   
    dobj.fun();

    return 0;
}