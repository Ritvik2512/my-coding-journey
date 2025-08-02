#include <stdio.h>
#include <math.h>

//Programs for upto n term
void sumofseries01(int n)
{
    int sum , term , counter;
    sum = 0;
    term = 1;
    for (counter  = 1; counter <= n; counter++)
    {
        sum = sum + term;
        term = term + 2;
    }
    printf("The sum of this series is = %d",sum);
}

void sumofseries02(int n)
{
    int sum , term , counter;
    sum = 0;
    term = 1; 
    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + term;
        term = term * 2;
    }
    printf("The sum of this series is = %d",sum);   
}


void sumofseries03(int n)
{
    int sum , term , counter;
    sum = 0;
    term = 2; 
    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + term;
        term = term * 4;
    }
    printf("The sum of this series is = %d",sum);
}

/**
4. Function to find the sum of the series
0  1  3  7  15  31 . . . . n terms
*/
void sumofseries04(int n)
{
    int sum , term , counter;
    sum = 0;
    term = 0; 
    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + term;
        term = (term * 2) + 1;
    }
    printf("The sum of this series is = %d",sum);
}

/**
5. Function to find the sum and print the Series
1  10  100  1000  10000 . . . . n terms
*/
void sumofseries05(int n)
{
    int sum , term , counter;
    sum = 0;
    term = 1; 
    for (counter = 1; counter <= n; counter++)
    {
        //use the term
        sum = sum + term;

        //calculate next term
        term = term * 10;
    }
    printf("The sum of this series is = %d",sum);
}

/**
 * 6. Function to find the sum of the series
 * 1  11  111  1111  11111 . . . . n terms
 */
void sumofseries06(int n)
{
    int sum , term , counter;
    sum = 0;
    term = 1; 
    for (counter = 1; counter <= n; counter++)
    {
        //use the term
        sum = sum + term;

        //calculate next term
        term = (term * 10) + 1;
    }
    printf("The sum of this series is = %d",sum);
}

/*Find the sum of the following series
x^1 + x^3 + x^5 +....+ n terms
*/
void sumofseries07(int n)
{
    int sum , term , counter , x;
    printf("Enter a value for x :");
    scanf("%d" , &x);

    sum = 0;
    term = x;
    for (counter = 1; counter <= n ; counter ++)
    {
        sum = sum + term;
        term = term * (pow(x,2));
    }
    printf("The sum of the series is = %d",sum);
}

/**
 * 8. Find sum of the series
 * x^1 - x^3 + x^5 - x^7 + … n terms
 */
void sumofseries08(int n)
{
    int sum , term , counter , x , sign;
    printf("Enter a value for x :");
    scanf("%d" , &x);

    sum = 0;
    term = x;
    sign = 1;

    for (counter = 1; counter <= n ; counter ++)
    {
        sum = sum + (sign * term);
        term = term * (pow(x,2));
        sign = sign * -1;
    }

    printf("The sum of the series is = %d",sum);
}

/**
 * 9.  1! + 3! + 5! + …  n terms
 * 
 * Generate next term using current term
*/
void sumofseries09(int n)
{
    int sum , term , sign , counter , k;

    sum = 0;
    term = 1;
    k = 2;
    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + term;
        term = term * k * (k + 1);
        k = k + 2;
    }
    printf("The sum of the series is = %d",sum);
}

/*10. Function to find the sum of series 1! - 3! + 5! - . . . n terms*/
void sumofseries10(int n)
{
    int sum , term , sign , counter , k;

    sum = 0;
    term = 1;
    k = 2;
    sign = 1;
    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + (sign * term); 
        term = term * k * (k + 1);
        k = k + 2;
        sign = sign * -1;
    }
    printf("The sum of the series is = %d",sum);
}

/*11. Function to find the sum of series (x^1 / 1!) - (x^3 / 3!) + (x^5 / 5!) - . . . n terms*/
void sumofseries11(int n)
{
    int sum , numerator , denominator , sign , counter , k , x , term;

    printf("Enter a value for x :");
    scanf("%d" , &x);

    sum = 0;
    sign = 1;
    numerator = x;
    denominator = 1;
    term = x;
    k = 2;

    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + (sign * term);
        numerator = numerator * x * x;
        denominator = denominator * k * (k + 1);
        term = numerator / denominator;
        k = k + 2;
        sign = sign * -1;
    }
    printf("The sum of the series is = %d",sum);
}

/*12. Function to find the sum of series 1 + (1+2) + (1+2+3) + (1+2+3+4) + . . . n terms*/
void sumofseries12(int n)
{
    int sum , term , counter , k;

    sum = 0;
    term = 1;
    k = 2;

    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + term;
        term = term + k;
        k++;
    }
    printf("The sum of the series is = %d",sum);
}

/*13. Function to find the sum of series 1 - (1*2) + (1*2*3) - (1*2*3*4) + . . . n terms*/
void sumofseries13(int n)
{
    int sum , sign , counter , k , term;

    sum = 0;
    term = 1;
    sign = 1;
    k = 2;

    for (counter = 1; counter <= n; counter ++)
    {
        sum = sum + (sign * term);
        term = term * k;
        k++;
        sign = sign * -1;
    }
    printf("The sum of the series is = %d",sum);
}

/*14. Function to find the sum of series 1 - (1+2)/(1*2) + (1+2+3)/(1*2*3) - (1+2+3+4)/(1*2*3*4) + . . . n terms*/
void sumofseries14(int n)
{
    int sum , sign , counter , numerator , denominator , term , k;

    sum = 0;
    sign = 1;
    numerator = 1;
    denominator = 1;
    term = 1;
    k = 2;

    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + (sign * term);
        numerator = numerator + k;
        denominator = denominator * k;
        term = numerator / denominator;
        k++;
        sign = sign * -1;
    }
    printf("The sum of the series is = %d",sum);
}

int main()
{
    int givenNumber;
    printf("Enter a value for n : ");
    scanf("%d",&givenNumber);

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
    sumofseries11(givenNumber);
    sumofseries12(givenNumber);
    sumofseries13(givenNumber);
    sumofseries14(givenNumber);
}