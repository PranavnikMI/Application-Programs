#include<iostream>
using namespace std;

class demo 
{
    public:
        int A,B;
        demo()
        {
            A = 0;
            B = 0;
        }
        demo(int i)
        {
            A = i;
            B = o;
        }
        demo(int i , int j)
        {
            A = i;
            B = j;
        }

};

int main()
{
    demo obj1;
    demo obj2(11);
    demo obj3(11,21);


    return 0;
}