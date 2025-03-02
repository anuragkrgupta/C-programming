#include<stdio.h>
int main()
{
    int n,i,f=1,*p;
    printf("enter a number");
    scanf("%d",&n);
    p=&f;
    for(i=1;i<=n;i++)
    {
        *p=(*p)*i;
    }
    printf("factorial= %d",f);
    return 0;
}