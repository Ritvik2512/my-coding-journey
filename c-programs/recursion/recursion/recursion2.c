#include <stdio.h>
int gcd(int m,int n);
int main()
{
    int a,b,result;
    scanf("%d %d",&a,&b);

    result=gcd(a,b);
    printf("%d",result);
}
int gcd(int m,int n)
{
    
    if(n==0)
    {
        return m;
    }
    else
    {
        return gcd(n,m%n);
    }
}