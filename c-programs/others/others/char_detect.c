//program to check if character is uppercase, lowercase, digit space or special character
#include <stdio.h>
#include <ctype.h>
int main()
{
    //declaration
    char ch;

    //input from user
    printf("Enter character : ");
    scanf("%c" , &ch);

    //computation 
    if (ch >= 'A' && ch <= 'Z') // can also use isupper(ch)
    {
        printf("'%c' is uppercase character",ch);
    }

    else if (ch >= 'a' && ch <= 'z') // can also use islower(ch)
    {
        printf("'%c' is lowercase character",ch);
    }

    else if (ch == ' ') // can also use isspace(ch)
    {
        printf("'%c' is digit space",ch);
    }

    else if (ch >= '0' && ch <= '9') // can also use isdigit(ch)
    {
        printf("'%c' is a digit",ch);
    }

    else 
    {
        printf("'%c' is special character",ch);
    }
}
//can only use the alternate commands if we include 'ctype.h'