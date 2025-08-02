/**
 * category 2 function - takes input as parameter and doesn't return
 */

#include <stdio.h>
void findfactorial(int n)
{
    int i , factorial;

    factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is = %d",n,factorial);
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);

    findfactorial(n);
}