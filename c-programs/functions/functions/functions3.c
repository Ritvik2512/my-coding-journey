/**
 * category 3 - function that takes input as parameter and returns
 */
#include <stdio.h>
int findfactorial(int n);

int main()
{
    int n , fact;
    printf("Enter value of n : ");
    scanf("%d",&n);

    fact = findfactorial(n);

    printf("Factorial of %d is = %d",n,fact);
}

int findfactorial(int n)
{
    int i , factorial;

    factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}