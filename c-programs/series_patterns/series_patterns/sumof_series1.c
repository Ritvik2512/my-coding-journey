#include <stdio.h>
#include <math.h>

//Find sum of series 1 + 2 + 3 + 4 + ... + n
void sumofseries01(int n)
{
    int i , sum;
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of the series is = %d" , sum);
}

//Find sum of series 1^2 + 2^2 + 3^2 + 4^2 .... + n^2
void sumofseries02(int n)
{
    int i , sum, term;
    sum = 0;
    term = 1;
    for (i = 1; i <= n; i++)
    {
        term = i * i;
        sum = sum + term;
    }
    printf("The sum of the series is = %d" , sum);
}

//Find sum of series 2^0 + 2^1 + 2^2 + 2^3 + .... + 2^n
void sumofseries03(int n)
{
    int i, sum, term;
    sum = 0;
    term = 1;
    for (i = 0; i <= n; i++)
    {
        term = pow(2 , i);
        sum = sum + term;
    }
    printf("The sum of the series is = %d" , sum);
}

//Find sum of series (1 * 2) + (2 * 3) + (3 * 4) + ... + (n * (n + 1))
void sumofseries04(int n)
{
    int i, sum, term;
    sum = 0;
    term = 1;
    for (i = 1; i <= n; i++)
    {
        term = i * (i + 1);
        sum = sum + term;
    }
    printf("The sum of the series is = %d" , sum);
}

//Find sum of series x^1 + x^2 + x^3 + .... + x^n
void sumofseries05(int n)
{
    int i, sum, term, x;
    sum = 0;
    term = 1;

    printf("Enter a number : ");
    scanf("%d" , &x);

    for (i = 0; i <= n; i++)
    {
        term = pow(x , i);
        sum = sum + term;
    }
    printf("The sum of the series is = %d" , sum);
}

//Find sum of series x^1 - x^2 + x^3 - x^4 .... + x^n
void sumofseries06(int n)
{
    int i, sum, term, x, temp;
    sum = 0;
    term = 1;
    temp = 1;

    printf("Enter a number : ");
    scanf("%d" , &x);

    for (i = 1; i <= n; i++)
    {
        term = temp * pow(x , i);
        sum = sum + term;
        temp = temp * -1;
    }
    printf("The sum of the series is = %d" , sum);
}

//Find sum of series x^1 + x^3 + x^5 + .... x^n
void sumofseries07(int n)
{
    int i, sum, term, x;
    sum = 0;
    term = 1;

    printf("Enter a number : ");
    scanf("%d" , &x);

    for (i = 0; i <= n; i = i + 2)
    {
        term = pow(x , i);
        sum = sum + term;
    }
    printf("The sum of the series is = %d" , sum);
}

//Find sum of series x^1 - x^3 + x^5 - x^7 + .... x^n
void sumofseries08(int n)
{
    int i, sum, term, x, temp;
    sum = 0;
    term = 1;
    temp = 1;
    printf("Enter a number : ");
    scanf("%d" , &x);

    for (i = 1; i <= n; i = i + 2)
    {
        term = temp * pow(x , i);
        sum = sum + term;
        temp = temp * -1;
    }
    printf("The sum of the series is = %d" , sum);
}

int main()
{
    int inputNumber;
    printf("Enter a number : ");
    scanf("%d" , &inputNumber);

    printf("\n");
    sumofseries01(inputNumber);
    printf("\n");
    sumofseries02(inputNumber);
    printf("\n");
    sumofseries03(inputNumber);
    printf("\n");
    sumofseries04(inputNumber);
    printf("\n");
    sumofseries06(inputNumber);
    printf("\n");
    sumofseries07(inputNumber);
    printf("\n");
    sumofseries08(inputNumber);
    printf("\n");
}