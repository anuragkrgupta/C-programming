#include<stdio.h>
void main()
{
    file *fp=NULL;
    char ch;
    fpp=fopen("abc.txt",r);
    if(fp==NULL)
    {
        printf("error");
        text(1);

    }
    while(feop(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
        fclose(fp);
    }
}