#include <stdio.h>
int main()
{
    int a , b;
    int *pa , *pb;
    int **ppa , **ppb;

    a = 100;
    b = 200;

    pa = &a;
    pb = &b;

    ppa = &pa;
    ppb = &pb;

    printf("a = %d" , **ppa);
    printf("\nb = %d" , **ppb);
}