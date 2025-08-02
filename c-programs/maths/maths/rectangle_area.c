//Write a program to find the area of a rectangle whose length and breadth are given.
#include <stdio.h>
int main()
{
    //declaration
    float length;
    float breadth;
    float area;

    //input from user
    printf("Enter length : ");
    scanf("%f" , &length);

    printf("Enter breadth : ");
    scanf("%f" , &breadth);

    //computation
    area = length * breadth;

    //output
    printf("The area of reactangle with length %f and breadth %f is = %f",length,breadth,area);
}