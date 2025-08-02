//program to find greatest of two numbers
#include <stdio.h>
int main()
{
    //delcaration
    int a;
    int b;

    //input from user
    printf("Enter first number : ");
    scanf("%d" , &a);

    printf("Enter second number : ");
    scanf("%d" , &b);

    //computation
    if (b > a)
    {
        printf("Greatest number between %d and %d is %d",a,b,b);
    }

    else if(a > b)
    {
        printf("Greatest number between %d and %d is %d",a,b,a);
    }

    else
    {
        printf("Both numbers are equal");
    }
}