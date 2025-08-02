#include <stdio.h>
int main()
{
    //declaration
    int secondlowest , secondhighest , lowestindex , highestindex , highest , lowest;
    int a[5] = {10,20,30,40,50};;

    highest = a[0];
    lowest = a[0];
    secondlowest = a[0];
    secondhighest = a[0];
    for (int i = 1; i < 5; i++)
    {
        if (a[i] > highest)
        {
            secondhighest = highest;
            highestindex = i;

            highest = a[i];
        }
        
        else if (a[i] > secondhighest)
        {
            secondhighest = a[i];
            highestindex = i;
        }
    }

    for (int i = 1; i < 5; i++)
    {
        if (a[i] < lowest)
        {
            secondlowest = lowest;
            lowestindex = i;

            lowest = a[i];
        }

        else if (a[i] < secondlowest)
        {
            secondlowest = a[i];
            lowestindex = i;
        }
    }
    printf("Second highest element is %d with index %d",secondhighest,highestindex);
    printf("\nSecond lowest element is %d with index %d",secondlowest,lowestindex);
}