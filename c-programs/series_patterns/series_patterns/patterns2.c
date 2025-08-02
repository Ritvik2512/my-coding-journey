#include <stdio.h>
/*Function to print following pattern
    *
   **
  ***
 ****
*****
*/

void pattern19()
{
    int i , j;
    for (i = 1; i <= 5; i++)//to print spaces in current row
    {
        for (j = i; j<=4 ; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)//to print stars in current row
        {
            printf("*");
        }
        printf("\n");
    }
}

/*Function to print following pattern
*****
 ****
  ***
   **
    *
*/
void pattern20()
{   
    int i , j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < i; j++ )
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern21()
{
    int i , j , n;
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)//loop to print spaces
        {
            printf(" ");
        }

        for(j = n; j >= i; j--)//loop to print spaces
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern22()
{
    int i , j;
    for (i = 1; i <= 5; i++)//loop for upper half
    {
        for (j = 1; j <= 5 - i; j++)//loop to print spaces (decreasing)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)//loop to print stars
        {
            printf("*");
        }
        printf("\n");        
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j <= i - 1; j++)//loop to print spaces(increasing but only from 4 to 1)
        {
            printf(" ");
        }
        for (j = 4; j >= i; j--)//loop to print stars
        {
            printf("*");
        }
        printf("\n");
    }

}

/*Function to print the following pattern(diamond)
    *
   * *
  * * *
 * * * * 
* * * * *
 * * * *
  * * *
   * *
    *    
*/
void pattern23()
{
    int i , j;
    for (i = 1; i <= 5; i++)//loop for upper half
    {
        for (j = 1; j <= 5 - i; j++)//loop to print spaces (decreasing)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)//loop to print stars
        {
            printf("* ");
        }
        printf("\n");        
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j <= i - 1; j++)//loop to print spaces(increasing but only from 4 to 1)
        {
            printf(" ");
        }
        for (j = 4; j >= i; j--)//loop to print stars
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*Function to print the following pattern
    *
   ***
  *****
 ******* 
*********
 *******     
  *****        
   ***          
    *        
*/
void pattern24()
{
    int i , j;
    for (i = 1; i <= 5 ; i++)//loop for upper half
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= ((2 * i) - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)//loop for lower half
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for (j = ((2 * i) - 1); j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

}
int main()
{
    //pattern19();
    //pattern20();
    //pattern21();
    //pattern22();
    //pattern23();
    pattern24();
}