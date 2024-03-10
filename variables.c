#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    Arr[0];             // 10
    sizeof(Arr);        // 16
    sizeof(Arr[2]);     // 4
    &(Arr[3]);          // 112

    &Arr;               // 100
    Arr;                // 100
    &(Arr[0]);          // 100
    
    return 0;
}