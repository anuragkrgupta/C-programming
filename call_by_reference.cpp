//call by reference
#include<iostream>
using namespace std;
void bazar(int &,int &);
int main()
{
    int a=100,b=200;
    cout<<a<<" at house "<<b<<endl;
    bazar(a,b);
    cout<<a<<" after bazar at house "<<b<<endl;

    return 0;
}
void bazar(int &a,int &b)
{
    a=a-50;
    b=b-125;
    cout<<a<<" at bazar "<<b<<endl;
}