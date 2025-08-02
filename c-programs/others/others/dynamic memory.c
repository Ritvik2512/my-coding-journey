#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char *name = "Ritvik";
    char *NameCaps = malloc(50 * sizeof(char));
    char *NameSmall = malloc(50 * sizeof(char));
    int i , len;
    char ch1 , ch2 , ch3;

    len = strlen(name);

    for (i = 0; i < len; i++)
    {
        ch1 = *(name + i);

        ch2 = toupper(ch1);
        ch3 = tolower(ch1);

        *(NameCaps + i) = ch2;
        *(NameSmall + i) = ch3;
    }

    *(NameCaps + len) = 0;
    *(NameSmall + len) = 0;

    printf("\nOriginal : %s" , name);
    printf("\nAll caps : %s" , NameCaps);
    printf("\nAll small : %s" , NameSmall);
}