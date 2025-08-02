/**
 * 3.Program to prompt and accept names of n students store it in an array and display it
 */
#define max_num_students 100 //makes it such that max_num_students is another name for 100 (not a variable) , used for constants like pi ,etc.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d" , &n);

    char name[max_num_students][30];

    //input from user
    printf("\nEnter names of students : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&name[i]);
    }

    //output
    printf("The names are :");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d. %s" , (i + 1) , name[i]);
    }
}