
#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Comp App";
    int i;
    char ch;

    for (i = 0; i < strlen(s); i++)
    {
        ch = s[i]; //or *(s + i)
        printf("\nCharacter at idex %d is %c",i,ch); //can use s[i] directly instead of ch
    }
}