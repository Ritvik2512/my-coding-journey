//Write a program to find the area of a triangle whose base and height are given.
#include <stdio.h>
int main()
{
    //declaration
    float base;
    float height;
    float area;

    //input from user
    printf("Enter base of triangle : ");
    scanf("%f" , &base);

    printf("Enter hieght of triangle : ");
    scanf("%f" , &height);

    //computation
    area = 0.5 * base * height;

    //output
    printf("The area of triangle with base %f and height %f is = %f",base,height,area);
}