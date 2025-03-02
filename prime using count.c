#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter a numer: ");
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        if(b%a==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("prime number");
    else
    printf("not a prime number");
    return 0;
}