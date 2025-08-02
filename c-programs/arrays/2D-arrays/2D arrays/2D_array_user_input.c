/**2. Write a program to prompt and accept the elements of a 3 x 3 matrix and display it*/
#include <stdio.h>
int main()
{
    //declaration
    int i , j , input;
    int a[3][3];

    //input from user
    for (i = 0 ; i < 3 ; i++)
    {
        printf("\nEnter elements of row %d : \n",(i + 1));
        for (j = 0 ; j < 3 ; j++)
        {
            printf("\nEnter element :");
            scanf("%d",&a[i][j]);
            
        }
    }

    //display the array
    printf("2D array elements are : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
}