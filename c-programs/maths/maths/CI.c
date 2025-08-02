//Write a program to calculate the compound interest.
#include <stdio.h>
int main()
{
    //declaration
    float p;
    float r;
    float t;
    float i;
    float a;

    //input from user;
    printf("Enter principal amount : ");
    scanf("%f" , &p);

    printf("Enter rate of interest : ");
    scanf("%f" , &r);

    printf("Enter time period : ");
    scanf("%f" , &t);

    //computation
    a = p * pow((1 + r / 100) , t);
    i = a - p;

    //output
    printf("The compound interest to be paid on a sum of %f for a period of %f years at a rate of %f is = %f",p,t,r,i);
}