#include<stdio.h>
int main()
{
    float fh,c;
    printf("enter temperature: ");
    scanf("%f",&fh);
    c =((fh-32)*5)/9;
    printf("in celcius: %f",c);
    return 0;
}