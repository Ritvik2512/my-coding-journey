#include <stdio.h>

int main()
{
    int a[15] = {5 , 10 ,  15, 20 , 25 , 30 , 35 , 40 , 45 , 50 , 55 , 60 , 65 , 70 , 75};
    int key , low , mid , high , position , flag;
    
    printf("Enter element to be searched : ");
    scanf("%d" , &key);

    low = 0;
    high = 14;
    position = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            position = mid + 1;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
    }

    if (position >= 0)
    {
        printf("Element %d found at position %d" , a[mid] , position);
    }
    else
    {
        printf("Element %d not found" , key);
    }
}