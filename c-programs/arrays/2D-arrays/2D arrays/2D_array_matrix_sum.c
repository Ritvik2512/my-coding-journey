/**
 * 3. PRogram to prompt and accept two matrices (3x3) and find
 * its sum
*/
#include <stdio.h>
int main()
{
    //declaration
    int i , j , input;
    int a[3][3] , b[3][3] , SumMatrix[3][3];

    //input from user
    for (i = 0 ; i < 3 ; i++)
    {
        printf("\nEnter elements of Matrix A");
        for (j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&a[i][j]); 
        }
    }

    for (i = 0 ; i < 3 ; i++)
    {
        printf("\nEnter elements of Matrix B");
        for (j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //computation
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            SumMatrix[i][j] = a[i][j] + b[i][j];
        }
    }

    //output
    printf("The sum of the two matrices is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",SumMatrix[i][j]);
        }
        printf("\n");
    }
}