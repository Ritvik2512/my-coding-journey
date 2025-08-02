//program to concatenate two string using function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *firstname = "Ramesh";
    char *lastname = "RadhaKrishnan";
    char *fullname = calloc(100, sizeof(char)); //calloc (no. of characters , sizeof character)

    strcat(fullname , firstname);
    strcat(fullname , " ");
    strcat(fullname , lastname);

    printf("Full name : %s",fullname);
}