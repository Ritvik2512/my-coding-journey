#include <stdio.h>
int main()
{
    int a , b;
    int *pa , *pb; //pointers are declared with a *

    a = 100;
    b = 200;

    pa = &a;
    pb = &b;

    printf("\na = %d",a);
    printf("\nb = %d",b);

    printf("\n&a = %p",pa); //%p is used as placeholder for pointer
    printf("\n&b = %p",pb);

    printf("\na = %d",*pa); //using * while printing dereferences the pointer and gives value of variable of whose address is stored in the pointer variable
    printf("\nb = %d",*pb);
}