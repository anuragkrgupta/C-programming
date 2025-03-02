//digital sum
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
        r=r+d;
        x=x/10;
    }
    cout<<"digital sum is"<<r<<endl;
}