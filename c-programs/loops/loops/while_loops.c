//iterative programming
//while loop
#include <stdio.h>

//loop to print 5 stars
void loop1()
{
    //declaration
    int counter;

    //initialization
    counter = 1;

    //loop
    while (counter <= 5)
    {
        printf("*");
        printf("\n");
        counter = counter + 1;
    }
}

//loop to print first 5 natural numbers
void loop2()
{
    //declaration
    int counter;

    //initialization
    counter = 1;

    //loop
    while (counter <= 5)
    {
        printf("%d " , counter);
        counter = counter + 1;
    }
}

//loop to print first n natural numbers
void loop3()
{
    //declaration
    int counter;
    int n;

    //input from user
    printf("Enter a value for n : ");
    scanf("%d" , &n);
    counter = 1;

    //loop
    while (counter <= n)
    {
        printf("%d ",counter);
        counter++;
    }
}

//loop to print even numbers from 1 to 10
void loop4()
{
    //declaration
    int counter;

    //initialization
    counter = 1;

    //loop
    while (counter <= 10)
    {
        if (counter % 2 == 0)
        {
            printf("%d " , counter);
        }
        counter = counter + 1;
    }
}

//loop to print odd numbers from 1 to n
void loop5()
{
    //declaration
    int counter;
    int n;

    //initialization
    printf("Enter value for n :");
    scanf("%d" , &n);
    counter = 1;

    //loop
    while (counter <= n)
    {
        if (counter % 2 != 0)
        {
            printf("%d ",counter);
        }
        counter++;
    }
}

//loop to print factors of 10
void loop6()
{
    //declaration
    int factors;

    //initialization
    factors = 1;

    //loop to print factors
    while (factors <= 10)
    {
        if (10 % factors == 0)
        {
            printf("%d " , factors);
        }
        factors++;
    }
}

//loop to print factors of n
void loop7()
{
    //declaration
    int j;
    int n;

    //initialization
    printf("Enter value for n :");
    scanf("%d" , &n);
    j = 1;

    //loop to print factors
    while (j <= n)
    {
        if (n % j == 0)
        {
            printf("%d " , j);
        }
        j++;
    }
}

//loop to print numbers from 5 to 1
void loop8()
{
    //declaration
    int counter;

    //initialization
    counter = 5;

    //loop
    while (counter > 0)
    {
        printf("%d ",counter);
        counter--;
    }
}

//loop to print numbers from n to 1
void loop9()
{
    //declaration
    int n;
    int bucket;

    //initialization
    printf("Enter value of n :");
    scanf("%d" , &n);
    bucket = n;

    //loop to print numbers from n to 1
    while (bucket > 0)
    {
        printf("%d ", bucket);
        bucket--;
    }
}

//loop to find sum of first 5 natural numbers
void loop10()
{
    //declaration
    int counter;
    int sum;

    //initialization
    counter = 1;
    sum = 0;

    //loop to find sum of first 5 natural numbers
    while (counter <= 5)
    {
        sum = sum + counter;
        counter++;
    }

    //output
    printf("The sum of first 5 natural number is = %d",sum);
}

//loop to print sum of even numbers and product of odd numbers from 1 to n
void loop11()
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

//loop to find factors of n
void loop12()
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

int main()
{
    loop1();
    loop2();
    loop3();
    loop4();
    loop5();
    loop6();
    loop7();
    loop8();
    loop9();
    loop10();
    loop11();
    loop12();
}