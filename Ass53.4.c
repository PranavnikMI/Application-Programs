#include<stdio.h>

void Display()
{
    static char chv = 'A';
    
    if(chv <= 'F')
    {
        printf("%c\t",chv);
        chv++;
        Display(); 
    }
}

int main()
{
    Display();

    return 0;

}