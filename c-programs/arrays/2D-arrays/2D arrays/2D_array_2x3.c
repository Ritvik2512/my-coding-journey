/**
 * 1. Write a program to initialize a 2d array of size (2x3)
 * and display it in the matrix format
 */
#include <stdio.h>
int main()
{
    //declaration
    int i , j;
    int a[2][3] = {{1 , 2, 3} , {4 , 5 , 6}};

    //display the elements
    printf("2D array elements are : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
}