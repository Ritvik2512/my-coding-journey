//Write a program to find the area of a circle whose radius is given.
#include <stdio.h>
int main()
{
    //declaration
    float radius;
    float area;

    //input from user
    printf("Enter radius : ");
    scanf("%f", &radius);

    //computation
    area = 3.14 * radius * radius;

    //output
    printf("The area of circle with radius %f = %f",radius,area);
}