#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iNo);
        ~ArrayX();
        void Accept();
        void Display();
};

ArrayX :: ArrayX(int iNo)
{
    cout<<"Inside Constructor"<<"\n";
    iSize = iNo;
    Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside Destructor"<<"\n";
    delete []Arr;
}

void ArrayX :: Accept()
{
    cout<<"Enter the "<<iSize<<" Element in the Array :"<<"\n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"Element in the array is :"<<"\n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

class OprationX : public ArrayX
{
    public:
        OprationX(int No) : ArrayX(No)
        {

        }

        int Frequency();
        int SerchFirstOccarance(int iNo);
        int SerchLastOccarance(int iNo);
        int CountEven();
        int CountOdd();
        int SumAll();
};

int OprationX :: Frequency()
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        iCnt++;
    }
    return iCnt;
}

int OprationX :: SerchFirstOccarance(int iNo)
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

int OprationX :: SerchLastOccarance(int iNo)
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

int OprationX :: CountEven()
{
    int i = 0, iSum = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iSum = iSum + Arr[i]; 
        }
    }
    return iSum;
}

int OprationX :: CountOdd()
{
    int i = 0, iSum = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iSum = iSum + Arr[i]; 
        }
    }
    return iSum;
}

int OprationX :: SumAll()
{
    int i = 0, iSum = 0;
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

    OprationX obj(iLength);
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