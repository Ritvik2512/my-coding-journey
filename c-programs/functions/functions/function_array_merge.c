/**
 * function to take two arrays as parameter and return merged array
 */
#include <stdio.h>
#include <stdlib.h>
int *mergearrays(int a[] , int b[])
{
    int *merged = calloc(100 , sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        *(merged + i) = *(a + i);
    }

    for (int i = 0; i < 5 ; i++)
    {
        *(merged + i + 5) = *(b + i);
    }

    return merged;
}

int main()
{
    int temp;
    int a[5] = {10, 20, 30, 40, 50};
    int b[5] = {1, 2, 3, 4, 5};

    int *merge;
    merge = mergearrays(a,b);

    printf("Merged array elements are : ");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d",merge[i]);
    }
}

