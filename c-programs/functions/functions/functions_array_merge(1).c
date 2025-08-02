/**
 * Merge array
*/
#include <stdio.h>
#include <stdlib.h>
void mergeTwoArrays(int a[], int n, int b[], int m, int c[])
{
    int i, j;
    // Move all the items of array a into merged_array
    int k = 0;
    for (i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    // Move all the items of array b into merged_array
    for (i = 0; i < m; i++)
    {
        c[k] = b[i];
        k++;
    }
}
void display(int temp[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
}
int main()
{
    int x[3] = {1, 2, 3};
    int y[4] = {10, 20, 30, 40};
    int z[7];
    mergeTwoArrays(x, 3, y, 4, z);
    display(z, 7);
}