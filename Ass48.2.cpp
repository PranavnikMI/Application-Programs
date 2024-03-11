#include<iostream>
using namespace std;

template <class T>
T Freq(T *Brr, int iLength, T No)
{
    int iCnt = 0, iCount = 0;
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Brr[iCnt] == No)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    double bRet = 0, dValue = 0;

    cout<<"Enter size of Array : "<<"\n";
    cin>>iSize;

    cout<<"Enter Number :"<<"\n";
    cin>>iValue;

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

    iRet = Freq(Arr,iSize,iValue);
    cout<<"Frequency of "<<iValue<<" is : "<<iRet<<"\n";
    
    cout<<"Enter Number :"<<"\n";
    cin>>dValue;

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

    bRet = Freq(Crr,iSize,dValue);
    cout<<"Frequency of "<<dValue<<" is : "<<bRet<<"\n";

    return 0;
}