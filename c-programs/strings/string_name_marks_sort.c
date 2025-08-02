/**
 * 5.Program to prompt and accept marks of n students and sort them in descending order of their marks
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);

    int i , j;
    char names[n][30];
    int marks[5];
    printf("\nEnter names of students");
    for (i = 0; i < n ; i++)
    {
        scanf("%s",&names[i]);
        scanf("%d",&marks[i]);
    }

    char temp[30];
    int tempMarks;
    
    //output
    printf("\nBefore sorting");
    printf("\n----------------------------");
    printf("\n|     Name     |   Marks   |");
    printf("\n-----------------------------");
    for (i = 0; i < n; i++)
    {
        printf("\n|  %10s  |  %d  |", names[i] , marks[i]);
    }


    //sorting
    for(i = 0 ; i < n - 1; i++)
    {
        for(j = 0 ; j < n - i - 1 ; j++)
        {
            if (marks[j] < marks[j + 1])
            {
                //swap marks
                tempMarks = marks[i];
                marks[i] = marks[i + 1];
                marks[i + 1] = tempMarks;

                //swap names
                strcpy(temp , names[j]);
                strcpy(names[j] , names[j + 1]);
                strcpy(names[j + 1] , temp);
            }
        }
    }

    printf("\nAfter sorting");
    printf("\n----------------------------");
    printf("\n|     Name     |   Marks   |");
    printf("\n-----------------------------");
    for(i = 0; i < n; i++)
    {
        printf("\n|  %10s  |  %d  |", names[i] , marks[i]);
    }
}