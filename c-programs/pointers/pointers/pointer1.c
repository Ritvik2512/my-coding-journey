#include <stdio.h>
int main()
{
    int a,b,c,product;
    int *pa,*pb,*pc,*pproduct;
    int **ppa,**ppb,**ppc;

    printf("Enter values\n");
    scanf("%d %d %d",&a,&b,&c);

    pa=&a;
    pb=&b;
    pc=&c;
    pproduct=&product;
    *pproduct=*pa * *pb * *pc;
    ppa=&pa;
    ppb=&pb;
    ppc=&pc;

    printf("%d\n",*pproduct);
    printf("%p\n",*ppa);
    printf("%d\n",**ppa);
}