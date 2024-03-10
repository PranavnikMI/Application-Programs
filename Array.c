#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Base address of array : %p\n",Arr);     //1st way for address
    printf("Base address of array : %p\n",&Arr);     //2nd way for address
    printf("Size of array is : %d\n",sizeof(Arr));  // 20
    
    return 0;
}