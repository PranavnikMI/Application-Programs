#include<iostream>
using namespace std;

template <class T>
T Largest(T iNo1, T iNo2, T iNo3)
{
    T iMax = 0;

    if(iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        iMax = iNo1;
    }
    else if(iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        iMax = iNo2;
    }
    else
    {
        iMax = iNo3;
    }
    return iMax;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;;

    cout<<"Enter First Number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second Number :"<<"\n";
    cin>>iValue2;

    cout<<"Enter third Number :"<<"\n";
    cin>>iValue3;

    iRet = Largest(iValue1,iValue2,iValue3);
    cout<<"Largest number is : "<<iRet<<"\n";

    double dValue1 = 0, dValue2 = 0, dValue3 = 0, dRet = 0;;

    cout<<"Enter First Number :"<<"\n";
    cin>>dValue1;

    cout<<"Enter Second Number :"<<"\n";
    cin>>dValue2;

    cout<<"Enter third Number :"<<"\n";
    cin>>dValue3;

    dRet = Largest(dValue1,dValue2,dValue3);
    cout<<"Largest number is : "<<dRet<<"\n";

    return 0;
}