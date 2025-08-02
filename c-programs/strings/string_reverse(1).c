#include <stdio.h>
#include <string.h>

int main()
{
    char inp[100];
    char rev[100];
    printf("Enter a string\n");
    scanf("%s",inp);
    int len=strlen(inp);
    int j=0;
    for(int i=len;i>-1;i--)
    {
        rev[i]=inp[len-i-1];
        j++;
    }
    printf("%s\n",rev);
    printf("%d",strcmp(rev,"emordnilap"));
    return 0;
}