#include <stdio.h>
int fact(int n);
int main()
{
    int n,fac;
    scanf("%d",&n);

    fac=fact(n);
    printf("%d",fac);
}

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}