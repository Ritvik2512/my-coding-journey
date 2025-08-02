#include <stdio.h>

/*Write a program that reverses an array and stores it in a new array 
(statically initialize the array)
*/
int main()
{
    //declaration
    int i , last;
    int a[5];
    int reverse[5];

    //initialization
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    last = 4;

    //computation
    for (i = 0; i < 5; i++)
    {
        reverse[last] = a[i];
        last--;
    }

    //output
    printf("\nReversed array :");
    for (i = 0; i < 5; i++)
    {
        printf("\nThe array element at index %d is = %d",i,reverse[i]);
    }
}