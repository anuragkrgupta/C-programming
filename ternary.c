#include<stdio.h>
int main()
{
    int x,y,z,b;
    printf("enter three number");
    scanf("%d%d%d",&x,&y,&z);

    b=(x>y)?(x>z?x:z):(y>z?y:z);
    printf("%d",b);
    //return 0;
}