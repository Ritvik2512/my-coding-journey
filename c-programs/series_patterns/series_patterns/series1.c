#include <stdio.h>

/**
 * Function to print the following series
 * 1  2  3  4   5 . . . . n
 */
void series01(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%d " , i);
    }
}

/**
 * Function to print the following series
 * 1   3   5 . . . . n
 */
void series02(int n)
{
    int i;
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d " , i);
    }
}

/**
 * Function to print the following series
 * 2  4  6  . . . . n
 */
void series03(int n)
{
    int i;
    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d " , i);
    }
}

/**
 * 1  2  4  8  16  32 . . . n
*/
void series04(int n)
{
    int i;
    for (i = 1; i <= n; i = i * 2)
    {
        printf("%d " , i);
    }
}

/**
 * Function to print the series 0  1  3  7  15  31 . . . . n
*/
void series05(int n)
{
    int i;
    for (i = 0; i <= n; i = (i * 2) + 1)
    {
        printf("%d " , i);
    }
}

/*Function to print the series 1 11 111 1111 .... n*/
void series06(int n)
{
    int i;
    for (i = 1; i <= n; i = (i * 10) + 1)
    {
        printf("%d " , i);
    }
}

int main()
{
    int inputNumber;
    printf("Enter a number :");
    scanf("%d", &inputNumber);

    printf("\n");
    series01(inputNumber);
    printf("\n");
    series02(inputNumber);
    printf("\n");
    series03(inputNumber);
    printf("\n");
    series04(inputNumber);
    printf("\n");
    series05(inputNumber);
    printf("\n");
    series06(inputNumber);
    printf("\n");
}