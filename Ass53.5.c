#include<stdio.h>

void Display()
{
    static char chv = 'a';
    
    if(chv <= 'f')
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