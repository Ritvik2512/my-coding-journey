#include <stdio.h>

/**
 * 2. Program to input an array of 10 integers, store it in an array.
 * Find the sum and display the array along with sum of integers
*/
int main()
{
    //declaration
    int a[10];
    int i , sum;

    sum = 0;

    //input from user
    for (i = 0; i < 10 ; i++)
    {
        printf("Enter value : ");
        scanf("%d" , &a[i]);
    }

    //computation
    for (i = 0 ; i < 10 ; i++)
    {
        sum = sum + a[i];
    }

    //output
    for (i = 0; i < 5; i++)
    {
        printf("\nThe value at index %d is = %d" , i , a[i]);
    }
    printf("\nThe sum of the elements of the array is = %d",sum);
}