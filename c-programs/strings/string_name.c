/**
 * 2.Program to take a name and display a welcome message
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *name = calloc(100,sizeof(char));
    printf("Enter a name:");
    scanf("%s",name);

    printf("Hello %s",name);
}