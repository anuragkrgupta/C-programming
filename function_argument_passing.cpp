//argument passing to parameter
#include<iostream>
using namespace std;

void sum(int,int);//(function prototype)
int main()
{
    int x,y,z;
    cout<<"Enter two number";
    cin>>x>>y;
    sum(x,y);
}
void sum(int a,int b)
{
    int z;
    z=a+b;
    cout<<"sum ="<<z<<endl;
}