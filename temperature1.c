#include<stdio.h>
int main()
{
    float fh,c;
    printf("enter temperature: ");
    scanf("%f",&c);
    fh=((c*9/5)+32);
    printf("in celcius: %f",fh);
    return 0;
}