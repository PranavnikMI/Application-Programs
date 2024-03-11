#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int iNo);
        ~ArrayX();
        void Accept();
        void Display();
        int Frequency();
        T SerchFirstOccarance(T iNo);
        T SerchLastOccarance(T iNo);
        T CountEven();
        T CountOdd();
        T SumAll();
};

template <class T>
ArrayX <T> :: ArrayX(int iNo)
{
    cout<<"Inside Constructor"<<"\n";
    iSize = iNo;
    Arr = new T[iSize];
}

template <class T>
ArrayX <T> :: ~ArrayX()
{
    cout<<"Inside Destructor"<<"\n";
    delete []Arr;
}

template <class T>
void ArrayX <T> :: Accept()
{
    cout<<"Enter the "<<iSize<<" Element in the Array :"<<"\n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX <T> :: Display()
{
    cout<<"Element in the array is :"<<"\n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
int ArrayX <T> :: Frequency()
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        iCnt++;
    }
    return iCnt;
}

template <class T>
T ArrayX <T> :: SerchFirstOccarance(T iNo)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iCnt = i;
            break; 
        }
    }
    return iCnt;
}

template <class T>
T ArrayX <T> :: SerchLastOccarance(T iNo)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iCnt = i; 
        }
    }
    return iCnt;
}

template <class T>
T ArrayX <T> :: CountEven()
{
    int i = 0;
    T iSum = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iSum = iSum + Arr[i]; 
        }
    }
    return iSum;
}

template <class T>
T ArrayX <T> :: CountOdd()
{
    int i = 0;
    T iSum = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iSum = iSum + Arr[i]; 
        }
    }
    return iSum;
}

template <class T>
T ArrayX <T> :: SumAll()
{
    int i = 0;
    T iSum = 0;
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i]; 
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0, iLength = 0;
    cout<<"Enter the size of Array :"<<"\n";
    cin>>iLength;

    ArrayX <int>obj(iLength);
    obj.Accept();
    obj.Display();

    cout<<"Enter Number :"<<"\n";
    cin>>iValue;
    
    iRet = obj.Frequency();
    cout<<"Frequency of given Array is : "<<iRet<<"\n";
    
    iRet = obj.SerchFirstOccarance(iValue);
    cout<<"First Occurance of the Given Number is : "<<iRet<<"\n";

    iRet = obj.SerchLastOccarance(iValue);
    cout<<"Last Occurance of the Given Number is : "<<iRet<<"\n";

    iRet = obj.CountEven();
    cout<<"Count of even Number is : "<<iRet<<"\n";

    iRet = obj.CountOdd();
    cout<<"Count of odd Number is : "<<iRet<<"\n";

    iRet = obj.SumAll();
    cout<<"Count of All Number is : "<<iRet<<"\n";

    return 0;
}