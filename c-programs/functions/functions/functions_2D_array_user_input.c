#include <stdio.h>
void display(int temp[3][3],int r,int c);
int main()
{
    int n;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    display(array,n,n);
}

void display(int temp[3][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}