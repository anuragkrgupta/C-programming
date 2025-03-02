//puts nd gets
#include<iostream>
using namespace std;

int main()
{
    char x[80];
    cout<<"Enter a name ";
    cin.getline(x,79);
    cout<<"Your name is ";
    cout<<x<<endl;
}