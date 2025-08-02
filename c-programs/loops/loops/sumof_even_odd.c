//program to find sum of even numbers and product of odd numbers from 1 to n
#include <stdio.h>
int main()
{
    //declaration
    int number;
    int sum;
    int product;
    int n;

    //initialization
    printf("Enter value for n :");
    scanf("%d" , &n);
    number = 1;
    sum = 0;
    product = 1;

    //loop to find product and sum
    while (number <= n)
    {
        if (number % 2 == 0)
        {
            sum = sum + number;
        }
        else 
        {
            product = product * number;
        }
        number++;
    }

    //output
    printf("The sum of even numbers is = %d",sum);
    printf("\nThe product of odd numbers is = %d",product);
}