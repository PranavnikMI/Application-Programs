#include<iostream>
using namespace std;

template <class T>
T Mult(T iNo1, T iNo2)
{
    T iAns = 0;
    iAns = iNo1 * iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;;

    cout<<"Enter First Number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second Number :"<<"\n";
    cin>>iValue2;

    iRet = Mult(iValue1,iValue2);
    cout<<"Multiplication of two number is : "<<iRet<<"\n";

    double dValue1 = 0, dValue2 = 0, dRet = 0;;

    cout<<"Enter First Number :"<<"\n";
    cin>>dValue1;

    cout<<"Enter Second Number :"<<"\n";
    cin>>dValue2;

    dRet = Mult(dValue1,dValue2);
    cout<<"Multiplication of two number is : "<<dRet<<"\n";

    return 0;
}