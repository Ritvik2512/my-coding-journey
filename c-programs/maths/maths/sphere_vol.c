//Write a program to find the volume and surface area of a sphere.
#include <stdio.h>
#include <math.h>
int main()
{
    //declaration
    float radius;
    float volume;
    float surface;

    //input from user
    printf("Enter radius of sphere : ");
    scanf("%f" , &radius);

    //computation
    volume = (4 / 3) * 3.14 * pow(radius , 3);
    surface = 4 * 3.14 * pow(radius , 2);

    //output
    printf("The surface area and volume of sphere with radius %f are %f and %f respectively",radius,surface,volume);
}