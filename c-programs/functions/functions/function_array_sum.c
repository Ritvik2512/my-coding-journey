/**
 * define a function to take an array as a parameter and find the sum of all array elements
 */

#include <stdio.h>
int findsum(int a[] , int n);

int main()
{
    int a[5] , sum;
    printf("Enter :");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d",&a[i]);
    }

    sum = findsum(a,5);

    printf("Sum of array elements is = %d",sum);
}

int findsum(int a[] , int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}