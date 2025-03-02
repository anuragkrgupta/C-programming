//all by values
#include<iostream>
using namespace std;
void mangla(int,int);
int main()
{
    int a=100 ,b=200;
    cout<<a<<" at house "<<b<<endl;

    mangla(a,b);
    cout<<a<<" After mangla bazar at house "<<b<<endl;
    return 0;
}
void mangla(int a,int b)
{
    a=a-50;
    b=b-125;
    cout<<a<<" at mangla bazar "<<b<<endl;
}