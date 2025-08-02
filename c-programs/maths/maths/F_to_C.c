//Write a program to convert Fahrenheit to Celsius.
#include <stdio.h>
int main()
{
    //declaration
    float fahrenheit;
    float celsius;

    //input from user
    printf("Enter temperature in Fahrenheight : ");
    scanf("%f" , &fahrenheit);

    //computation
    celsius = (fahrenheit - 32) * (5 / 9);

    //output
    printf("%f fahrenheit in celsius is = %f",fahrenheit,celsius);
}