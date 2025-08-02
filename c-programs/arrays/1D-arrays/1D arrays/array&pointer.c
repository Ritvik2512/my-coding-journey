#include <stdio.h>
#include <string.h>
int main()
{
    char *temp;
    char *a[]={"Chen","Del","Hyder","Bang"};
    for(int i=0;i<4;i++)
    {
        
        for(int j=0;j<3;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<4;i++)
    {
        printf("%s ",a[i]);
    }
}