#include <stdio.h>
void Array(int n,int *array);
int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    Array(n,array);
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}

void Array(int n,int *array)
{
    for(int i=0;i<n;i++)
    {
        array[i]=array[i]+1;
    }
    
}