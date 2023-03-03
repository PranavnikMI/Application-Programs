#include<iostream>
using namespace std;

class demo 
{
    public:
        int A,B;
    
        demo(int i = 0, int j = 0)
        {
            A = i;
            B = j;
        }
};

int main()
{
    demo A(10,20);      
    demo B(30,40);
    demo Ans(0,0);

    Ans = A + B;

    return 0;
}