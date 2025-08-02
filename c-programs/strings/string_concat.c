#include <stdio.h>
#include <string.h>
void str_concat(char c1[],char c2[]);

int main()
{
    char c1[50],c2[50];

    scanf("%s",c1);
    scanf("%s",c2);

    str_concat(c1,c2);
}

void str_concat(char c1[],char c2[])
{
    char c3[100];
    int k=0,n1=strlen(c1),n2=strlen(c2);
    for(int i=0;c1[i]!='\0';i++)
    {
        c3[k]=c1[i];
        k++;
    }
    for(int i=0;c2[i]!='\0';i++)
    {
        c3[k+i]=c2[i];
    }
    c3[n1+n2]=0;
    printf("%s",c3);
}