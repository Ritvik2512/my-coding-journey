//program to accept a character and check if its a vowel
#include <stdio.h>
int main()
{
    //declaration 
    char ch;

    //input from user
    printf("Enter a character : ");
    scanf("%c" , &ch); //'%c' is used as placeholder for character

    //computation
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel",ch);
    }

    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a vowel",ch);
    }

    else
    {
        printf("%c is not a vowel",ch);
    }
}