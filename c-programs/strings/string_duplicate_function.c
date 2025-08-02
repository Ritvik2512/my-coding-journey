//program to duplicate string with function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *name1 = "Hello World";
    char *name2 = malloc(30 * sizeof(char));

    strcpy(name2 , name1); //strcpy (variable to which u are copying , the one which u are copying)

    printf("Given string : %s",name1);
    printf("\nCopied string : %s",name2);
}
