//program to change case
#include <stdio.h>
int main()
{
    //declaration
    char ch1;
    char ch2;

    //input from user
    printf("Enter character : ");
    scanf("%c" , &ch1);

    //computation
    if (ch1 >= 'A' && ch1 <= 'Z')
    {
        ch2 = (char)(ch1 + 32);
    }

    else if (ch1 >= 'a' && ch1 <= 'z')
    {
        ch2 = (char)(ch1 - 32);
    }

    //output
    printf("Given character - %c , new character - %c",ch1,ch2);
}