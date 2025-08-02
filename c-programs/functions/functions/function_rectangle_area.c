/**
 * function to take length and breadth of rectangle and return area of rectangle
 */
#include <stdio.h>

int area(int length ,int breadth);

int main()
{
    int length , breadth , ar;
    printf("Enter length of rectangle : ");
    scanf("%d",&length);

    printf("\nEnter breadth of rectangle : ");
    scanf("%d",&breadth);

    ar = area(length,breadth);

    printf("\nArea of rectangle with length %d and breadth %d is = %d",length,breadth,ar);
}

int area(int length , int breadth)
{
    int ar;
    ar = length * breadth;
    return ar;
}