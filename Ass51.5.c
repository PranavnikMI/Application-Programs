// Toggle 1st and Last Niggle
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleFirstLastNiggle(UINT iNo)
{
   UINT Mask =0XF000000F;
   UINT iResult = 0;

   iResult = iNo | Mask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = ToggleFirstLastNiggle(iValue);
    printf("Modified Number is : %d",iRet);
  
    return 0;
}