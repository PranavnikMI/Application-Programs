#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    char Filename1[30], Filename2[30];
    int Ret = 0;

    printf("Enter the existing file name : \n");
    scanf("%s",Filename1);

    printf("Enter the name for hardlink : \n");
    scanf("%s",Filename2);
    
    Ret = link(Filename1,Filename2);

    if(Ret == 0)
    {
        printf("Hardlink gets created succesfully...\n");
    }

    return 0;
}

// C code
//Ans = a-b;

// Assembly Code
//sub	sp, sp, #128

// Opcode
//ff              03              02              d1
//1111 1111       0000 0011       0000 0010       1101 0001

// Binary
//11111111000000110000001011010001