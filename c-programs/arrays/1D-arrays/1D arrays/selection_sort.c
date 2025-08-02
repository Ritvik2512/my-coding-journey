#include <stdio.h>
//selection sort
int main()
{
    //static initialization of array
    int a[5] = {40 , 50 , 10 , 30 , 20};

    int lowest , i , lowestindex , temp , j , n;
    n = 5;

    printf("\nBefore sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        lowest = a[i];
        lowestindex = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < lowest)
            {
                lowest = a[j];
                lowestindex = j;
            }
        }

        temp = a[lowestindex];
        a[lowestindex] = a[i];
        a[i] = temp;
    }


    printf("\nAfter sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}