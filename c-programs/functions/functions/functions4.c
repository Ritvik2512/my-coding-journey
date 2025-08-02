/**
 * category 4 - function that does not take input as parameter but returns
 */
#include <stdio.h>
int findfactorial();

int main()
{
    int fact;
    
    fact = findfactorial();

    printf("Factorial is = %d",fact);
}

int findfactorial()
{
    int i , n , factorial;

    printf("Enter value of n : ");
    scanf("%d",&n);

    factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}