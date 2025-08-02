//program to find greatest of 3 numbers
#include <stdio.h>
int main()
{
    //declaration
    int a;
    int b;
    int c;

    //input from user
    printf("Enter first number : ");
    scanf("%d" , &a);

    printf("Enter second number : ");
    scanf("%d" , &b);

    printf("Enter third number : ");
    scanf("%d" , &c);

    //computation
    if (a > b && a > c)
    {
        printf("Greatest number between %d , %d and %d is %d",a,b,c,a);
    }
    else if (b > c && b > a)
    {
        printf("Greatest number between %d , %d and %d is %d",a,b,c,b);
    }
    else if (c > a && c > b)
    {
        printf("Greatest number between %d , %d and %d is %d",a,b,c,c);
    }
}