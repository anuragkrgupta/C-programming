//array always passed by reference//
#include<iostream>
using namespace std;
void display(int a[],int b)
{
    a[0]=a[0]+10;
    a[1]=a[1]+20;
    a[4]=a[4]+100;
    for(int k=0;k<b;k++)
    cout<<a[k]<<" ";
}
int main()
{
    int x[5]={100,200,300,400,500};
    display(x,5);  //array passing
    cout<<"\n in main ";
    for (int k=0;k<5;k++)
    cout<<x[k]<<" ";
}