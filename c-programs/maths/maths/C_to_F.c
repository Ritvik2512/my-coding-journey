//Write a program to convert Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    //declaration
    float celsius;
    float fahrenheit;

    //input from user
    printf("Enter temperature in celsius : ");
    scanf("%f" , &celsius);

    //computation
    fahrenheit = (celsius * (9 / 5)) + 32;

    //output
    printf("%f celsius in fahrenheit is = %f",celsius,fahrenheit);
}