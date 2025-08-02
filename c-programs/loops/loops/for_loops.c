//iterative programming
//for loop

#include <stdio.h>

//loop to print 5 stars
void floop1()
{
    //declaration
    int counter;

    //loop to print 5 stars
    for (counter = 1;counter <= 5;counter++)
    {
        printf("*");
        printf("\n");
    }
}

//loop to print first 5 natural numbers
void floop2()
{
    //declaration
    int i;

    //loop to print first 5 natural numbers
    for (i = 1;i <= 5;i++)
    {
        printf("%d " , i);
    }
}

//loop to print first n natural numbers
void floop3()
{
    //declaration
    int i , n;

    //input from user
    printf("Enter value for n : ");
    scanf("%d" , &n);

    //loop to print first n natural numbers
    for (i = 1;i <= n;i++)
    {
        printf("%d " , i);
    }
}

//loop to print even numbers from 1 to 10
void floop4()
{
    //declaration
    int i;

    //loop to print even numbers from 1 to 10
    for (i = 1;i <= 10;i++)
    {
        if (i % 2 == 0)
        {
            printf("%d " , i);
        }
    }
}

//loop to print odd numbers from 1 to 10
void floop5()
{
    //declaration
    int i , n;

    //input from user
    printf("Enter value for n : ");
    scanf("%d" , &n);

    //loop to print odd numbers from 1 to n
    for (i = 1;i <= n;i++)
    {
        if (i % 2 != 0)
        {
            printf("%d " , i);
        }
    }
}

//loop to find factors of 10
void floop6()
{
    //declaration
    int i;

    //loop to find factors of 10
    for (i = 1;i <= 10;i++)
    {
        if (10 % i == 0)
        {
            printf("%d " , i);
        }
    }
}

//loop to print factors
void floop7()
{
    //declaration
    int j , n;

    //initialization
    printf("Enter value for n :");
    scanf("%d" , &n);

    //loop to print factors
    for (j = 1;j <= n;j++)
    {
        if (n % j ==0)
        {
            printf("%d " , j);
        }
    }
}

//loop to print numbers from 5 to 1
void floop8()
{
    //declaration
    int i;

    //loop to print numbers from 5 to 1
    for (i = 5;i > 0;i--)
    {
        printf("%d " , i);
    }
}

//loop to print numbers from n to 1
void floop9()
{
    //declaration
    int n;
    int i;

    //initialization
    printf("Enter value of n :");
    scanf("%d" , &n);
    

    //loop to print numbers from n to 1
    for (i = n;i > 0;i--)
    {
        printf("%d " , i);
    }
}

//loop to find sum of first 5 natural numbers
void floop10()
{
    //declaration
    int i;
    int sum;

    //initialization
    sum = 0;

    //loop to find sum of first 5 natural numbers
    for (i = 1;i <= 5;i++)
    {
        sum = sum + i;
    }

    //output
    printf("The sum of first 5 natural numbers is = %d" , sum);
}

//loop to print sum of even numbers and product of odd numbers
void floop11()
{
    //declaration
    int i , n , sum , prod;

    //input from user
    printf ("Enter value for n : ");
    scanf("%d" , &n);

    //loop to find product and sum
    for (i = 1;i <= n;i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else 
        {
            prod = prod * i;
        }
    }

    printf("The sum of even numbers is = %d",sum);
    printf("\nThe product of odd numbers is = %d",prod);
}

int main()
{
    floop1();
    floop2();
    floop3();
    floop4();
    floop5();
    floop6();
    floop7();
    floop8();
    floop9();
    floop10();
    floop11();
}