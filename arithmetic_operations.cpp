#include<iostream>
using namespace std;
int sum(int,int);
int sub(int,int);

int main()
{
    int x,y,p,q;
    cout<<"Enter two number";
    cin>>x>>y;
    p=sum(x,y);
    q=sub(x,y);
    cout<<"value"<<p*q<<endl;
}
    int sum(int a,int b)
    {
        int z;
        z=a+b;
        return z;
    }
    int sub(int a,int b)
    {
        int z;
        z=a-b;
        return z;
    }
