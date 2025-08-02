//program to toggle case(using predfined functions)
#include <stdio.h>
#include <ctype.h>
int main()
{
    //declaration
    char ch1;
    char ch2;

    //input from user
    printf("Enter character : ");
    scanf("%c" , &ch1);

    //computation
    if (isupper(ch1))
    {
        ch2 = tolower(ch1);
    }

    else if (islower(ch1))
    {
        ch2 = toupper(ch1);
    }

    //output
    printf("Given character - %c , new character - %c",ch1,ch2);
}