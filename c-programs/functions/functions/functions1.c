/**
 * category 1 function no return no arguments
 */
#include <stdio.h>

void findfactorial()
{
    int n , i , factorial;

    printf("Enter value of n : ");
    scanf("%d",&n);

    factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is = %d",n,factorial);
}

int main()
{
    findfactorial();
}