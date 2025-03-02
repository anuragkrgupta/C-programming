#include<stdio.h>
void power(int x,int y)
{
     int a=1,i;
     for(i=1; i<=y; i++)
          a=a*x;
     printf("  %d^%d : %d", x, y, a);
}
int main()
{
     int x,y;
    // printf("/*Calcualate : x^y*/\n");
     printf("Enter Value of x : ");
     scanf("%d", &x);
     printf("\nEnter Value of y : ");
     scanf("%d", &y);
     //printf("----------------------\n");
     power(x,y);
     return 0;
}