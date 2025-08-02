#include <stdio.h>
int main()
{
    //declaration
    int a;
    int b;
    int sum;

    //static initialization
    a=10;
    b=20;

    //computation
    sum=a+b;

    //output
    printf("%d",sum); //%d is a placeholder which is replaced by sum
    printf("The sum of %d and %d is = %d",a,b,sum);
}