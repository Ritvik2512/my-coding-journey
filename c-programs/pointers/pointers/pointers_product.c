//program to find product of three numbers
#include <stdio.h>
int main()
{
    float a , b , c , product;
    float *pa , *pb , *pc , *pproduct;

    pa = &a;
    pb = &b;
    pc = &c;
    pproduct = &product;

    printf("Enter three numbers : ");
    scanf("%f%f%f" , pa , pb , pc);
    
    *pproduct = *pa * *pb * *pc;

    printf("The product of %f , %f and %f is = %f",*pa,*pb,*pc,*pproduct);
}
