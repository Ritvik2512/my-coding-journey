//pattern program 
#include <stdio.h>

/* function to print the following pattern
* * * * * 
*/
void pattern1()
{
    int j;
    printf("\n");
    for (j = 1; j <= 5 ; j++)
    {
        printf("* ");
    }
}

/*
Function to print the following pattern
* * * * *
* * * * *
* * * * *
*/
void pattern2() 
{
    int i , j;
    for (i = 1;i <= 3 ; i++)
    {
        for (j = 1; j <= 5 ; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

/*
Function to print the following pattern
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
*/
void pattern3()
{
    int i , j;
    for (i = 1; i <= 4 ; i++)
    {
        for (j = 1; j <= 4 ; j++)
        {
            printf("%d " , i);
        }
        printf("\n");
    }
}

/*
Function to print the following pattern
*
* *
* * *
* * * *
* * * * *
*/
void pattern4()
{
    int i , j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1;j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*Function to print the following pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
*/
void pattern5()
{
    int i , j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*Function to print the following pattern
1
2 2
3 3 3 
4 4 4 4 
5 5 5 5 5
*/
void pattern6()
{
    int i , j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

/*Function to print the following pattern
1
2 3 
4 5 6
7 8 9 10
*/
void pattern7()
{
    int i , j , number;
    number = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d " , number);
            number++;
        }
        printf("\n");
    }
}

/*
Function to print the following pattern
A
B C
D E F
G H I J
K L M N O
*/
void pattern8()
{
    int i , j;
    char alpha;
    alpha = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c " , alpha);
            alpha++;
        }
        printf("\n");
    }
}

/*
Function to print the following pattern
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
void pattern9()
{
    int i , j , number;
    for (i = 1; i <= 5; i++)
    {
        number = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
}

/*
Function to print the following pattern
A
B C
C D E
D E F G
E F G H I
*/
void pattern10()
{
    int i , j;
    char alpha , start;
    alpha = 'A';
    start = 'A';
    for (i = 1; i <= 5; i++)
    {
        alpha = start;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
        start++;
    }
}

/*Function to print the following pattern
* * * * *
* * * *
* * *
* *
*
*/
void pattern11()
{
    int i , j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*Function to print the following pattern
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
void pattern12()
{
    int i , j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1;j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 12 but taking user input
void pattern13()
{
    int i , j , n;
    
    printf("Enter a vlue for n :");
    scanf("%d" , &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1;j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = (n - 1); i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*Function to print following pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void pattern14()
{
    int i , j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d " , j);
        }
        printf("\n");
    }
}

/*Function to print following pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/
void pattern15()
{
    int i , j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d " , i);
        }
        printf("\n");
    }
}

/*Function to print following pattern
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
4 5 6 7
3 4 5
2 3
1
*/
void pattern16()
{
    int i , j , number;
    for (i = 1; i <= 5; i++)
    {
        number = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        number = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d " , number);
            number++;
        }
        printf("\n");
    }
}

/*Function to print following pattern
A
A B
A B C
A B C D
A B C D E
A B C D
A B C
A B
A
*/
void pattern17()
{
    int i , j;
    char alpha;
    for (i = 1; i <= 5; i++)
    {
        alpha = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c " , alpha);
            alpha++;
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        alpha = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c " , alpha);
            alpha++;
        }
        printf("\n");
    }
}

/*Function to print following pattern
A
B C
C D E
D E F G
E F G H I
D E F G
C D E
B C
A
*/
void pattern18()
{
    int i , j;
    char alpha , start;
    alpha = 'A';
    start = 'A';
    for (i = 1; i <= 5; i++)
    {
        alpha = start;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
        start++;
    }

    start = 'D';
    for (i = 4; i >= 1; i--)
    {
        alpha = start;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
        start--;
    }
}

int main()
{
    //printf("Pattern 1");
    //printf("\n");
    //pattern1();
    //printf("\nPattern 2");
    //printf("\n");
    //pattern2();
    //pattern3();
    //pattern4();
    //pattern5();
    //pattern6();
    //pattern7();
    //pattern8();
    //pattern9();
    //pattern10();
    //pattern11();
    //pattern12();
    //pattern13();
    //pattern14();
    //pattern15();
    //pattern16();
    //pattern17();
    //pattern18();
}