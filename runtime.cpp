#include<iostream>
using namespace std;

class Base
{
    public:
       int A,B;                              // access specifier

       void fun()                           //function defination           1000
       {
            cout<<"Base fun\n";
       }
       void gun(int i)                      //function defination            2000
       {
            cout<<"Base gun with one integer\n";
       }
       void gun(int i, int j)               // overloaded function defination     3000
       {
            cout<<"Base gun with two integer\n";
       }
};

class Derived : public Base
{   
    public:
      int X,Y;
      
    void sun()                             //function defination         4000
    {
        cout<<"derived sun\n";
    } 
    void fun(int i)                             //function redefination       5000
    {
        cout<<"derived fun\n";
    }          
};

int main()
{
    Derived dobj;
    
    dobj.fun(51);             //CALL 5000
    dobj.gun(11);          //CALL 2000
    dobj.gun(11,21);       //CALL 3000
    dobj.sun();            //CALL 4000

    return 0;
}