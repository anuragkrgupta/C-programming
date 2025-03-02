#include<stdio.h>
int main()
{
    int a=5,b=6,c,*p,*q;
    p=&a;q=&b;
    c=*p;
    *p=*q;
    *q=c;
    printf("a=%d,b=%d",*p,*q);
    return 0;
}