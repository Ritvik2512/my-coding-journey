//prog39 with for loop
#include <stdio.h>
int main()
{
    //declaration
    int i;
    int sum;
    int prod;
    int n;

    //input from user
    printf ("Enter value for n : ");
    scanf("%d" , &n);

    //loop to find product and sum
    for (i = 1;i <= n;i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else 
        {
            prod = prod * i;
        }
    }

    printf("The sum of even numbers is = %d",sum);
    printf("\nThe product of odd numbers is = %d",prod);
}