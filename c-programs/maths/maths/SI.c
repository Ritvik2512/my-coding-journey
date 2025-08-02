//Write a program to calculate the simple interest.
#include <stdio.h>
int main()
{
    //declaration
    float p;
    float r;
    float t;
    float i;

    //input from user
    printf("Enter principal amount : ");
    scanf("%f" , &p);

    printf("Enter rate of interest : ");
    scanf("%f" , &r);

    printf("Enter time period : ");
    scanf("%f" , &t);

    //computation
    i = (p * r * t)/100;

    //output
    printf("The interest to be paid on a sum of %f for a period of %f years at rate of interest %f per annum is = %f",p,r,t,i);
}