#include<stdio.h>
void prime(int n)
{
    int count, i,j;
    for(i=1;i<=n;i++)
    {
       count=0;
      for(j=1;j<=i;j++)
      {
        if(i%j==0)
        {
            count++;
        }
      }
    if(count==2)
        printf("%d ",i);
    }
}
    void main()
    {  
        int n;  
        printf("enter number");
        scanf("%d ",&n);
        prime(n);
    }