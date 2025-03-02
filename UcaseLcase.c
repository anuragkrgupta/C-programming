#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character in lower case: ");
    scanf("%c",&x);
    printf("the ascii value in %d\n",x);
    x-=32;
    printf("the upper case value is %c",x);    
}