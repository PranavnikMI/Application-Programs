#include<iostream>
using namespace std;

// call by refrance
template <class T>
void Swap(T &x, T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 11, b = 10;
    
    cout<<"value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";
    Swap(a,b);
    cout<<"value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    double p = 11.9, q = 10.1;
    cout<<"value of p "<<p<<"\n";
    cout<<"Value of q "<<q<<"\n";
    Swap(p,q);
    cout<<"value of p "<<p<<"\n";
    cout<<"Value of q "<<q<<"\n";

    return 0;
}