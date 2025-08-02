/**
 * Define a function to take two matrices, find the sum of two matrices and return the sum matrix.
 */

#include <stdio.h>
#include <stdlib.h>

int *sumofmatrices(int m1[][3] , int m2[3][3])
{
    int *sum = calloc(9 , sizeof(int));

    for (int i = 0 ; i < 3; i++)
    {
        for (int j = 0 ;j < 3; j++)
        {
            *(sum + i + j) = *(m1 + i + j) + (int)(*(m2 + i + j));
        }
    }

    return sum;
}

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];

    printf("Enter elements for matrix 1 : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter elements for row %d",(i + 1));
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\nEnter elements for matrix 2 : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter elements for row %d",(i + 1));
            scanf("%d",&matrix2[i][j]);
        }
    }

    int *summatrix = calloc(9 , sizeof(int));
    printf("\nSum matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j < 3; j++)
        {
            //printf("%d ",summatrix[i][j]);
        }
        printf("\n");
    }
}
