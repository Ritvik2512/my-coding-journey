//Write a program to calculate the roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    //declaration
    int b;
    int a;
    int c;
    int x1;
    int x2;

    //input from user
    printf("Enter coefficient of x^2 : ");
    scanf("%d" , &a);

    printf("Enter coefficient of x : ");
    scanf("%d" , &b);

    printf("Enter constant : ");
    scanf("%d" , &c);

    //computation
    x1 = (-b + sqrt(pow(b , 2) - 4 * a * c))/(2 * a);
    x2 = (-b - sqrt(pow(b , 2) - 4 * a * c))/(2 * a);

    //output
    printf("The roots of the quadratic equation %dx^2 + %dx + %d are = %d and %d",a,b,c,x1,x2);
}