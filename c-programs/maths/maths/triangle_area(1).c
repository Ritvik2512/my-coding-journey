//Write a program to find the area of a triangle whose 3 sides are given.
#include <stdio.h>
#include <math.h>
int main()
{
    //declaration
    float a;
    float b;
    float c;
    float s;
    float area;

    //input from user
    printf("Enter length of first side : ");
    scanf("%f" , &a);

    printf("Enter length of second side : ");
    scanf("%f" , &b);

    printf("Enter length of third side : ");
    scanf("%f" , &c);

    //computation
    s = (a + b + c) / 2;
    area = sqrt((s * (s - a) * (s - b) * (s - c)));

    //output
    printf("The area of triangle with sides %f , %f and %f is = ",a,b,c,area);

}