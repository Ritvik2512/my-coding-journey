//write a program to prompt and accept the side of square and find its area
#include <stdio.h>
#include <math.h>
int main()
{
    //declaration
    float side;
    float area;

    //input from user
    printf("Enter side of square : ");
    scanf("%f",&side); //for float we use '%f' as placeholder instead of '%d', for double "%lf"

    //computation
    area = side * side;
    area = pow(side , 2); //to use pow() we need to include the math header

    //output
    printf("The area of square with side %f is = %f",side,area);
}
