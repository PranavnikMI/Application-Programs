#include<iostream>
using namespace std;

class circle
{   
    public:                                       // access specifier
        float PI;                                 // characteristics
        float Radius;

        circle()                                  // default constructor
        {
            PI = 3.14;
            Radius = 0.0;
        }
        circle(float A, float B)                 // parameterised constructor
        {
            PI = A;
            Radius = B;
        }
        void Display()                           // concrete method        //1000
        {
            cout<<"value of radius is : "<<Radius<<"\n";
        }
        virtual float Area() = 0;                // Abstract method        //__
        virtual float Circumferance() = 0;       // Abstract method        //__
};

class marvellous : public circle
{
    public:
        marvellous() : circle()
        {
            
        }
          marvellous(float X , float Y) : circle(X,Y)
        {
            
        }
        float Area()                             // concrete method       // 2000
        {
            float Ans = PI * Radius * Radius;
            return Ans;
        }
        float Circumferance()                   // concrete method       // 3000
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;
            return Ans;
        }
};

int main()
{
    marvellous mobj1;
    marvellous mobj2(3.14,10.89);

    float fret = 0.0;

    fret = mobj2.Area();
    cout<<"Area is: "<<fret<<"\n";

    fret = mobj2.Circumferance();
    cout<<"Circumferance is: "<<fret<<"\n";

     return 0;
}