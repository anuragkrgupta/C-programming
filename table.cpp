//table
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x=1 ,t;
    cout<<"Enter a number for table";
    cin>>t;
    while(x<=10)
    {
        cout<<x*t<<endl;
        x+=1; //x++ or x=x+1
    }
}