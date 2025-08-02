/**
 * Define a function to take a 2d array as a parameter and display it in matrix format
 */
#include <stdio.h>
#include <stdlib.h>
void twodarray(int array[][3] , int rows , int cols)
{
    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0 ; j < cols; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int array[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter elements of row %d",(i + 1));
            scanf("\n%d",&array[i][j]);
        }
    }

    twodarray(array , 3 , 3);
}


