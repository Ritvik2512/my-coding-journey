//program to print numbers from n to 1
#include <stdio.h>
int main()
{
    //declaration
    int n;
    int bucket;

    //initialization
    printf("Enter value of n :");
    scanf("%d" , &n);
    bucket = n;

    //loop to print numbers from n to 1
    while (bucket > 0)
    {
        printf("%d ", bucket);
        bucket--;
    }
}