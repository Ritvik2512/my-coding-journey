#include <stdio.h>

/**
 * 4. Write a program to input an array of n integers and 
 * find the sum of all the even elements and product of all odd elements separately.
 * 
 */
int main()
{
    //declaration
    int i , sum , n , product;

    printf("Enter number of elements in the array :");
    scanf("%d" , &n);

    int a[n];

    sum = 0;
    product = 1;

    //input from user
    for (i = 0 ; i < n ; i++)
    {
        printf("\nEnter element : ");
        scanf("%d" , &a[i]);
    }

    //computation
    for (i = 0 ; i < n ; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
        
        else
        {
            product = product * a[i];
        }
    }

    //output
    for (i = 0 ; i < n ; i++)
    {
        printf("\nThe element stored at index %d is = %d" , i , a[i]);
    }
    printf("\nThe sum of all even elements is = %d",sum);
    printf("\nThe product of all odd elements is = %d",product);
}