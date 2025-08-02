#include <stdio.h>
int main()
{
    int a[3] = {100 , 200 , 300};

    printf("\na = %p" , a);

    printf("\n*a = %d" , *a);
    printf("\n*(a + 1) = %d" , *(a + 1));
    printf("\n*(a + 2) = %d", *(a + 2));
}