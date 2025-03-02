#include<stdio.h>
int main()
{
    int a,b,sum;
    int *s,*d;
    printf("enter two number=");
    scanf("%d %d",&a,&b);
    s=&a;
    d=&b;
    sum= *s + *d;
    printf("sum= %d",sum);
    return 0;
}