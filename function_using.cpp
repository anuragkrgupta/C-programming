//function using
#include<iostream>
using namespace std;

void sum(); //function prototype
void sub(); 

int main()
{
    sub();
    sum();
}
void sum()
{
    int x,y,z;
    cout<<"Enter two number";
    cin>>x>>y;
    z=x+y;
    cout<<"sum ="<<z<<endl;

}
void sub()
{
    int x,y,z;
    cout<<"Enter two number";
    cin>>x>>y;
    z=x-y;
    cout<<"sub ="<<z<<endl;
}