//ternary operator practice
#include<iostream>
using namespace std;

int main()
{
    int mark;
    cout<<"Enter your neet mark";
    cin>>mark;

    mark>=650 ? cout<<"You're eligible for govt. colleges" : cout<<"You're eligible for semi govt. colleges/private colleges";
    return 0;
}