#include<iostream>
using namespace std;

class Base
{
    //  int A;
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
        void fun()
        {
            cout<<"value of public i from fun : "<<i<<"\n";            //Allowed
            cout<<"value of private j from fun : "<<j<<"\n";           //Allowed
            cout<<"value of protected k from fun : "<<k<<"\n";         //Allowed
        }
};

int main()
{
    Base bobj;
    cout<<"value of public i : "<<bobj.i<<"\n";       //Allowed
    cout<<"value of private j : "<<bobj.j<<"\n";       //Not Allowed
    cout<<"value of protected k : "<<bobj.k<<"\n";     //Not Allowed

    bobj.fun();

    return 0;
}