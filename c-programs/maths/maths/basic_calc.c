//program to take two numbers from user and find sum, difference, product, quotient and remainder
#include <stdio.h>
int main()
{
    //declaration
    int a;
    int b;
    int sum;
    int difference;
    int product;
    int quotient;
    int remainder;

    //input from user;
    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    //computation
    sum= a + b;
    difference= a - b;
    product= a * b;
    quotient= a / b;
    remainder= a % b;

    //output
    printf("The sum of %d and %d is = %d",a,b,sum);
    printf("\nThe difference of %d and %d is = %d",a,b,difference);
    printf("\nThe product of %d and %d is = %d",a,b,product);
    printf("\nThe quotient of %d and %d is = %d",a,b,quotient);
    printf("\nThe remainder of %d and %d is = %d ",a,b,remainder);
}