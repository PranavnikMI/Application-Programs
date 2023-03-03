#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;


    char ch = 'A';

    char *q = &ch;



    printf("%d\n",no);  //11 
    printf("%d\n",p);   // 100
    printf("%d\n",&no); // 100
    printf("%d\n",&p);  // 200
    printf("%d\n",sizeof(no));  // 4
    printf("%d\n",sizeof(p));   // 8


    return 0;
}



int a = 10;     // 4
short int b = 10;   // 2
long int c = 10; // 8



int no = 11;


int *p  = &no;



int **q = &p;



int ***x = &q;



int **y = &x;



int **a = &p;



int ***b = &q;











                                            int no = 11;


                                            int *p = &no;





                                            double d = 9.789;


                                            double *q = &d;





no
&no
sizeof(no)
q
*x
**b
sizeof(b)
&y
&p
*p
**y
***x
***b
sizeof(p)
sizeof(***x)
&(**q)
&(***x)