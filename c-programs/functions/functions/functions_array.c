#include <stdio.h>
int findsum(int array[],int n);
int main()
{
    int array[5];
    int result;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

    result=findsum(array,5);
    printf("%d",result);
}
int findsum(int array[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=array[i];
    }
    return sum;
}