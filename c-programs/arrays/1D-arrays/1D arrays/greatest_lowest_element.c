/*Write a program to find the highest and lowest integer along with its index*/
#include <stdio.h>
int main()
{
    //static initialization of array
    int a[5] = {40 , 50 , 10 , 30 , 20};

    int greatest , greatestindex , lowest , i , lowestindex;

    greatest = a[0];
    lowest = a[0];
    for (i = 0; i < 5; i++)
    {
        if (a[i] > greatest)
        {
            greatest = a[i];
            greatestindex = i;
        }

        if (a[i] < lowest)
        {
            lowest = a[i];
            lowestindex = i;
        }
    }

    printf("The greatest element of the array is %d with index %d",greatest,greatestindex);
    printf("\nThe smallest element of the array is %d with index %d",lowest,lowestindex);
}