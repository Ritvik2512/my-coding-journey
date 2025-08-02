//Program to check if number is even or odd
#include <stdio.h>
int main()
{
    //declaration
    int a;
    
    //input from user
    printf("Enter a number : ");
    scanf("%d" , &a);

    //computation
    if (a % 2 == 0)
    {
        printf("%d is an even number",a);
    }
    else
    {
        printf("%d is an odd number",a);
    }
}