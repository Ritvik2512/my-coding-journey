#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];
    fgets(s1,100,stdin);

    for(int i=0;i<strlen(s1);i++)
    {
        *(s2+i)=*(s1+i);
    }
    s2[strlen(s1)]=0;
    printf("%s",s2);
}