#include <stdio.h>
int main()
{
    int a , b , sum;
    int *pa , *pb , *psum;

    pa = &a;
    pb = &b;
    psum = &sum;

    printf("Enter a value for a : ");
    scanf("%d" , pa);

    printf("\nEnter a value for b : ");
    scanf("%d" , pb);

    *psum = *pa + *pb;

    printf("\n sum of %d and %d is = %d",*pa,*pb,*psum);
}