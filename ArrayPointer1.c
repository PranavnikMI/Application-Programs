#include<stdio.h>
int main()
{
    int Arr[4] = {10,20,30,40};
    int *p = &(Arr[0]);
    int *q = &(Arr[3]);

    printf("%d\n",Arr[0]); // 10 
    printf("%d\n",*p);      // 10
    printf("%d\n",Arr[3]);  // 40
    printf("%d\n",*q);      // 40
    
    return 0;
}