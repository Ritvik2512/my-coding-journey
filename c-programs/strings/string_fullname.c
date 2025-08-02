//program to concatenate two strings
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *firstname = "Ramesh";
    char *lastname = "RadhaKrishnan";
    char *fullname = malloc(50 * sizeof(char));
    int i , len1 , len2 , len3;
    int index;

    index = 0;

    len1 = strlen(firstname);
    len2 = strlen(lastname);
    len3 = strlen(fullname);

    for (i = 0; i < len1; i++)
    {
        *(fullname + i) = *(firstname + i);
    }

    *(fullname + strlen(firstname)) = ' ';

    for (i = len1; i < len1 + len2; i++)
    {
        *(fullname + i + 1) = *(lastname + index);
        index++;
    }
    
    printf("Full name : %s",fullname);
}