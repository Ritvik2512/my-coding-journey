//program to compare two strings with function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int difference;
    char *word1 = "BATTLE";
    char *word2 = "BATCH";

    difference = strcmp(word2,word1);
    printf("Difference is : %d",difference);
}