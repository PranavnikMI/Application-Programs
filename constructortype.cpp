#include<iostream>
using namespace std;

class demo
{
    public:
        int i, j;
       
        demo()
        {
            i = 0;
            j = 0;
        }
        demo(int a, int b)
        {
            i = a;
            j = b;
        }
        demo(demo &ref)
        {
            i = ref.i;
            j = ref.j;
        }
};

int main()
{
    demo obj1;
    demo obj2(11,21);
    demo obj3(obj2);

    cout<<obj1.i<<"\t"<<obj1.j<<"\n";              // 0     0
    cout<<obj2.i<<"\t"<<obj2.j<<"\n";              // 11    21
    cout<<obj3.i<<"\t"<<obj3.j<<"\n";              // 11    21

    return 0;
}