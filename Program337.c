//do 4th bit off 
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  1111    1111    1111    1111    1111    1111    1111    0111
//   F       F       F       F       F       F       F       F
//  FFFFFFF7
//  0XFFFFFFF7 

UINT offBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;

    return (No & iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = offBit(Value);
    printf("Updated number is : %d\n",iRet);

    return 0;
}