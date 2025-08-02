#include <stdio.h>

/**
 * 3. Program to input an array of n integers, store it in an array.
 * Find the sum and display the array along with sum of integers
*/
int main()
{
    //declaration
    int n = 10;
    int i , sum;

    sum = 0;

    //input n from user //n needs to be initialized before declaring the array
    printf("Enter number of elements in array : ");
    scanf("%d" , &n);

    int a[n];

    //input from user
    for (i = 0; i < n ; i++)
    {
        printf("Enter value : ");
        scanf("%d" , &a[i]);
    }

    //computation
    for (i = 0 ; i < n ; i++)
    {
        sum = sum + a[i];
    }

    //output
    for (i = 0; i < n; i++)
    {
        printf("\nThe value at index %d is = %d" , i , a[i]);
    }
    printf("\nThe sum of the elements of the array is = %d",sum);
}