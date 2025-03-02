//array input and output
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int age[10],i;
    cout<<"Enter 10 number";
    for(i=0;i<10;i++)
    {
        cin>>age[i];
    }
    cout<<"Array number";
    for(i=0;i<10;i++)
    {
        cout<<age[i]<<" ";
    }
}