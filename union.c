#include<stdio.h>
union stu
{
    int a;
    char b;
    float c;

};
void main()
{
    union stu s;
    s.a=65;
    printf("%d",s.b);    
}