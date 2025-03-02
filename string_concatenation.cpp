#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char x[20]="Anurag kumar";
    char y[40]="I am ";
    strcat(y,x);
    cout<<y<<endl;
}