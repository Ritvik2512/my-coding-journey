#include <stdio.h>
int main()
{
    //declaration
    int a[5];
    int i;

    //initialization
    a[0] = 10;
    a[1] = 20;
    a[3] = 30;
    a[4] = 50;
    a[2] = 40;

    //output
    for (i = 1; i < 5 ; i++)
    {
        printf("Element at index %d is = %d" , i , a[i]);
    }
}

