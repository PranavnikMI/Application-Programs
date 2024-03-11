#include<iostream>
using namespace std;

template <class T>
T Add(T *Brr, int iLength)
{
    T Sum = 0;
    int iCnt = 0;
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        Sum = Sum + Brr[iCnt];
    }

    return Sum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    double bRet = 0;

    cout<<"Enter size of Array : "<<"\n";
    cin>>iSize;
    
    int *Arr = new int[iSize];
    cout<<"Enter the Element of Array : "<<"\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    cout<<"Element of the Array is : "<<"\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

    iRet = Add(Arr,iSize);
    cout<<"Sum of Element in Array is : "<<iRet<<"\n";    

    double *Crr = new double[iSize];
    cout<<"Enter the Element of Array : "<<"\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Crr[iCnt];
    }

    cout<<"Element of the Array is : "<<"\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Crr[iCnt]<<"\t";
    }
    cout<<"\n";

    bRet = Add(Crr,iSize);
    cout<<"Sum of Element in Array is : "<<bRet<<"\n";

    return 0;
}