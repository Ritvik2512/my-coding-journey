#include <stdio.h>

/**
 * 5. Write a program to generate the first 10 Fibonacci numbers and
 * store it in an array and then display the array.
 */
int main()
{
    //declaration 
    int i , n;
    
    n = 10;
    
    int a[n];
    a[0] = 0;
    a[1] = 1;

    //computation
    for (i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    //output
    for (i = 0; i < n; i++)
    {
        printf("\nThe array element at index %d is = %d",i,a[i]);
    }
}