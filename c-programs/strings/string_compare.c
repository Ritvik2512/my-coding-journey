//compare two strings and display difference of ascii values of the first indeifferent characters
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i , len1, len2 , difference;
    char *word1 = "BATTLE";
    char *word2 = "BATCH ";

    for (i = 0; i < strlen(word1) ; i++)
    {
        if (*(word1 + i) != *(word2 + i))
        {
            difference = *(word1 + i) - *(word2 + i);
            break;
        }
    }

    printf("Difference in ascii values of first indifferent character : %d" , difference);
}   