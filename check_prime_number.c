#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    
    for(i=2;i<=n/2;i++);
    {
    if  (n%i==0)
        
         printf("it is not a prime number");
    
    else 
    
    printf("it is a prime number");
    
    }

    
}