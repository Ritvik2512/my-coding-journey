#include <stdio.h>
int main()
{
    //declaration
    int i , j , input , product , sum , k;
    int a[3][3] , b[3][3] , ProductMatrix[3][3];
    product = 1;
    sum = 0;

    //input from user
    printf("\nEnter elements of Matrix A");
    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&a[i][j]); 
        }
    }

    printf("\nEnter elements of Matrix B");
    for (i = 0 ; i < 3 ; i++)
    {
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
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            ProductMatrix[i][j] = sum;
        }
    }

    //display 
    printf("The product of the two matrices is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",ProductMatrix[i][j]);
        }
        printf("\n");
    }
}