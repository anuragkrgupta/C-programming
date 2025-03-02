//strcmp
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char p[20]="pass@word";
    char t[20];
    cout<<"Enter your password :";
    cin>>t;
    if(strcmp(p,t)==0)
    cout<<"your SBI Bank ATM PIN :659";
    else
    cout<<"incorrect password";
}