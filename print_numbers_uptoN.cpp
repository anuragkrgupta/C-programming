#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x;
    cout<<"Enter number";
    cin>>x;

    tete: //lable
    cout<<x<<" ";
    x=x+1;
    if(x<=100)
    goto tete;
}