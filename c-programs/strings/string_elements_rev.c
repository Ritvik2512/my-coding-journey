#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Comp App";
    int i;

    //after reversing
    for (i = strlen(s); i > -1; i--)
    {
        printf("\nCharacter at index %d is %c",i,s[i]);
    }
}