//prog40 with for loop
#include <stdio.h>
int main()
{
    //declaration
    int i;
    int sum;
    int n;

    //initializing
    printf("Enter value of n : ");
    scanf("%d" , &n);
    sum = 0;


    //loop to print sum of factors 
    for (i = 1;i <= n;i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    //output
    printf("The sum of factors of %d is = %d",n,sum);

}