//program to duplicate a string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //declaration 
    int i , len;
    char *name1 = "Hello World";
    char *name2 = malloc(30 * sizeof(char));

    len = strlen(name1);

    for (i = 0; i < len; i++)
    {
        *(name2 + i) = *(name1 + i);
    }

    *(name2 + len) = 0;

    printf("Original string : %s",name1);
    printf("\nCopied string : %s",name2);
}