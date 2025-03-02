//prg to sum 1sq + 2sq + 3sq....
#include<iostream>
using namespace std;

int main()
{
    //clrscr();
    int i,a=0,b=0,n;
    cout<<"ENter limit "<<endl;
    cin>>n;
    for(i=1;i<=n;i=i+1)
    a=a+(i*i);
    cout<<"Result: "<<a;
    return 0;
}