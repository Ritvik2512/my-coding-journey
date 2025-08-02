//program to take 2 numbers from user and find its sum
#include <stdio.h>
int main()
{
    //delcaration
    int a;
    int b;
    int sum;

    //input from user
    printf("enter first number");
    scanf("%d",&a); //scanf takes input from user and requires address of the variable 
    //'&a' provides the address of variable 'a'

    printf("enter second number");
    scanf("%d",&b);

    //computation
    sum=a+b;

    //output
    printf("the sum of %d and %d is=%d",a,b,sum);
}