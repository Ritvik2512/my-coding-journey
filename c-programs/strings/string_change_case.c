#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Comp App";
    char s2[8];
    char ch;
    int i;

    for(i = 0; i < strlen(s); i++)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
        {
            s2[i] = s[i];
        }
        
        else if ((int)s[i] >= 97 && (int)s[i] <= 122)
        {
            ch = (char)(s[i] - 32);
            s2[i] = ch;
        }

        else
        {
            s2[i] = s[i];
        }
    }

    s2[strlen(s)] = '\0';

    printf("Element is : %s",s2);
}