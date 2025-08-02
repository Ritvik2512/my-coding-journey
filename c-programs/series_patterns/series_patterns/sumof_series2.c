#include <stdio.h>
#include <math.h>

//Programs for upto n

/*1. Function to find the sum of the series x^1 + x^2 + x^3 + x^4 + … x^n*/
void sumofseries01(int n)
{
    int i , sum , term , x;
    printf("Enter a value for x :");
    scanf("%d",&x);

    sum = 0;
    term = x;

    for (i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term * x;
    }
    printf("The sum of the series is = %d",sum);
}

/*2. Function to find the sum of the series x^1 - x^2 + x^3 - x^4 + … x^n*/
void sumofseries02(int n)
{
    int i , sum , term , x , sign;
    printf("Enter a value for x : ");
    scanf("%d",&x);

    sum = 0;
    term = x;
    sign = 1;

    for (i = 1; i <= n; i++)
    {
        sum = sum + (sign * term);
        term = term * x;
        sign = sign * -1;
    }
    printf("The sum of the series is = %d",sum);
}

/*3. Function to find the sum of the series x^1 + x^3 + x^5 + x^7 + … x^n*/
void sumofseries03(int n)
{
    int i , sum , term , x;
    printf("Enter a value for x :");
    scanf("%d",&x);

    sum = 0;
    term = x;

    for (i = 1; i <= n; i = i +2)
    {
        sum = sum + term;
        term = term * pow(x,2);
    }
    printf("The sum of the series is = %d", sum);
}

/*4. Function to find the sum of the series x^1 - x^3 + x^5 - x^7 + … x^n*/
void sumofseries04(int n)
{
    int i , sum , term , sign , x;
    printf("Enter a value for x :");
    scanf("%d",&x);

    sum = 0;
    term = x;
    sign = 1;

    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + (sign * term);
        term = term * pow (x,2);
        sign = sign * -1;
    }
}

/*5. Program to find the sum of series 1! + 2! + 3! + … n!*/
void sumofseries05(int n)
{
    int i , sum , term , k;

    sum = 0;
    term = 1;
    k = 2;

    for (i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term * k;
        k++;
    }
    printf("The sum of the series is = %d",sum);
}

/*6. Program to find the sum of series 1! + 3! + 5! + … n!*/
void sumofseries06(int n)
{
    int i , sum , term , k;
    
    sum = 0 ;
    term = 1;
    k = 2;

    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + term;
        term = term * k * (k + 1);
        k = k + 2;
    }
    printf("The sum of the series is = %d",sum);
}

/*7. Program to find the sum of series 1! - 3! + 5! - 7! + … n!*/
void sumofseries07(int n)
{
    int i , sum , term , k , sign;
    
    sum = 0 ;
    term = 1;
    k = 2;
    sign = 1;

    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + (sign * term);
        term = term * k * (k + 1);
        k = k + 2;
        sign = sign * -1;
    }
    printf("The sum of the series is = %d",sum);
}

/*8. Function to find the sum of series (x^1 / 1!) - (x^3 / 3!) + (x^5 / 5!) - … (x^n / n!)*/
void sumofseries08(int n)
{
    int i , sum , sign , numerator , denominator , x , term;
    printf("Enter value for x :");
    scanf("%d" , &x);

    sum = 0;
    sign = 1;
    term = x;
    numerator = x;
    denominator = 1;

    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + (sign * term);
        numerator = numerator * pow(x,2);
        denominator = denominator * (i + 1) * (i + 2);
        term = numerator / denominator;
        sign = sign * -1;
    }
    printf("The sum of the series is = %d",sum);
}

/**
9. Find the sum of series
1 + (1+2) + (1+2+3) + (1+2+3+4) + . . .  + (1+2+3+4+ … +n)
*/
void sumofseries09(int n)
{
    int i , j , sum , term;
    sum = 0;
    term = 0;

    for (i = 1; i <= n; i++)
    {
        term = 0;
        for (j = 1; j <= i; j++)
        {
            term = term + j;
        }
        sum = sum + term;
    }

    printf("The sum of the series is = %d",sum);
}

/**
 *
 * 10. 1 - (1*2) + (1*2*3) - (1*2*3*4) + . . .  + (1*2*3*4* … *n)
 */
void sumofseries10(int n)
{
    int i , j , sum , sign , term;
    sum = 0;
    sign = 1;
    term = 1;

    for (i = 1; i <= n; i++)
    {
        term = 1;
        for (j = 1; j <= i; j++)
        {
            term = term * j;
        }
        sum = sum + (sign * term);
        sign = sign * -1;
    }

    printf("The sum of the series is = %d",sum);
}

/**
11. Find the sum of the following series
1 - (1+2)/(1*2) + (1+2+3)/(1*2*3) - (1+2+3+4)/(1*2*3*4) + … (1+2+3+4+…+n)/(1*2*3*4*…*n)
*/
void sumofseries11(int n)
{
    float i , j , sum , sign , numerator , denominator , term;
    sum = 0;
    sign = 1;
    numerator = 0;
    denominator = 1;
    term = 0;

    for (i = 1; i <= n; i++)
    {
        term = 0;
        numerator = 0;
        denominator = 1;
        for (j = 1; j <= i; j++)
        {
            numerator = numerator + j;
            denominator = denominator * j;
            term = numerator / denominator;
        }
        sum = sum + (sign * term);
        sign = sign * -1;
    }

    printf("The sum of the series is = %f",sum);
}

int main()
{
    int givenNumber;
    float given;
    printf("Enter a vlue for n :");
    scanf("%d" , &givenNumber);

    printf("Enter a vlue for n :");
    scanf("%f" , &given);

    sumofseries01(givenNumber);
    sumofseries02(givenNumber);
    sumofseries03(givenNumber);
    sumofseries04(givenNumber);
    sumofseries05(givenNumber);
    sumofseries06(givenNumber);
    sumofseries07(givenNumber);
    sumofseries08(givenNumber);
    sumofseries09(givenNumber);
    sumofseries10(givenNumber);
    sumofseries11(given);
}