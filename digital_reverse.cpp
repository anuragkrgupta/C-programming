//digital reverse
#include<iostream>
using namespace std;

int main()
{
    int x,d,r=0;
    cout<<"Enter the number";
    cin>>x;
    while(x!=0)
    {
        d=x%10;
        r=r*10+d;
        x=x/10;
    }
    cout<<"\n reversed number is "<<r<<endl;
}