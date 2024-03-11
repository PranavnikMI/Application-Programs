#include<iostream>
using namespace std;

template <class T>
void DisplayReverse(T *Crr, int iLength)
{
    int i = 0;
    T temp;

    cout<<"Element in Array is : "<<"\n";
    for(i = 0; i < iLength; i++)
    {
        cout<<Crr[i]<<"\t";
    }
    cout<<"\n";

    for(i = 0; i < iLength/2; i++)
    {
        temp = Crr[i];
        Crr[i] = Crr[iLength - (i + 1)];
        Crr[iLength - (i + 1)] = temp;
    }

    cout<<"Element in Array in Reverse format is : "<<"\n";
    for(i = 0; i < iLength; i++)
    {
        cout<<Crr[i]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iSize = 0, iCnt = 0;

    cout<<"Enter Size of array : "<<"\n";
    cin>>iSize;

    cout<<"Enter "<<iSize<<" Elements in Array : "<<"\n";
    int *Arr = new int[iSize];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    DisplayReverse(Arr,iSize);

    cout<<"Enter "<<iSize<<" Elements in Array : "<<"\n";
    double *Brr = new double[iSize];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    DisplayReverse(Brr,iSize);

    return 0;
}