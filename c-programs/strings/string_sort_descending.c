/**
 * 4.Sort an array of strings in ascending order
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{   int i , j;
    char temp[30];
    char names[5][30] = {"DR", "AAJ ", "AS" , "SS" , "PMV"};
    int n = 5;

    printf("\nBefore sorting");
    for (i = 0; i < n ; i++)
    {
        printf("\n%d. %s", (i + 1) , names[i]);
    }

    //bubble sort
    for(i = 0 ; i < n - 1; i++)
    {
        for(j = 0 ; j < n - i - 1 ; j++)
        {
            if (strcmp(names[j] , names[j + 1]) > 0)
            {
                //swap
                strcpy(temp , names[j]);
                strcpy(names[j] , names[j + 1]);
                strcpy(names[j + 1] , temp);
            }
        }
    }

    //output
    printf("\nAfter sorting");
    for(i = 0; i < n; i++)
    {
        printf("\n%d . %s", (i + 1),names[i]);
    }
}
