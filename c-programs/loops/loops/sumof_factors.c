//program to find sum of factors of n
#include <stdio.h>
int main()
{
    //declaration
    int number;
    int sum;
    int n;

    //initialization
    printf("Enter value for n :");
    scanf("%d" , &n);
    number = 1;
    sum = 0;

    //loop to find sum of factors
    while (number <= n)
    {
        if (n % number == 0)
        {
            sum = sum + number;
        }
        number++;
    }

    //output
    printf("The sum of factors of %d is = %d",n,sum);
}