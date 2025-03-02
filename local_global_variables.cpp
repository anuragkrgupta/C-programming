//local & global
#include<iostream>
using namespace std;
int a=10; //defining the global variable;

int main()
{
    //local variable;
    int a=15;
    cout<<"local a="<<a<<" , global a="<<::a;

    //redefining global variable by using::
    ::a=20;
    cout<<"\n local a:"<<a<<" , global a:"<<::a;
    return 0;
}