#include<stdio.h>
int main()
{
    char str[]="anurag",str2[]=" kumar";
    printf("%s ",strupr(str));
    printf("%s ",strlwr(str));
    printf("%s ",strrev(str));
    printf("%s ",strcat(str,str2));
    printf("%s",strcpy(str2,str));
 
}