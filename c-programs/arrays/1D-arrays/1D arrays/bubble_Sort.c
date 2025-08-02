//Bubble sort
//comparing one element to its consecutive element
#include <stdio.h>

int main()
{
    
    int a[5] = {20 , 10 , 25 , 15 , 5};
    printf("Before sorting : ");
    for (int i = 0; i <= 4; i++)
    {
        printf("\n%d",a[i]);
    }
    
    int temp , n;
    n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("\nAfter sorting :");
    for (int i = 0; i <= 4; i++)
    {
        printf("\n%d",a[i]);
    }
}