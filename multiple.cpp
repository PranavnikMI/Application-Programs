#include<iostream>
using namespace std;

class Base1
{
    public:
        int A;                                    //4

        Base1()
        {
            cout<<"Inside Base1 constructor\n";
        }
        ~Base1()
        {
            cout<<"Inside Base1 destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base1 fun\n";
        }
};

class Base2
{   
    public:
        int I,J,K;                          //12
        
        Base2()
        {
            cout<<"Inside Base2 constructor\n";
        }
        ~Base2()
        {
            cout<<"Inside Base2 destrcutor\n";
        }
        void gun()
        {
            cout<<"Inside Base2 gun\n";
        }
};

class Derived : public Base1, public Base2
{   
    public:
        int X,Y;                                //24
        
        Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Inside derived destrcutor\n";
        }
        void sun()
        {
            cout<<"Inside Derived sun\n";
        }
};

int main()
{
    Derived dobj;
   
    dobj.fun();     //Base1
    dobj.gun();     //Base2
    dobj.sun();     //Derived
   
    return 0;
}