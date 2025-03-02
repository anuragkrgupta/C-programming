//function indirect calling
#include<iostream>
using namespace std;

void hks();
void ronaldo();
void jack();


int main()
{
    hks();
    ronaldo();    
}
void hks()
{
    jack();
    cout<<"My name is Anurag kumar"<<endl;
}
void ronaldo()
{
    cout<<"My name is ronaldo";
}
void jack()
{
    cout<<"My name is jack"<<endl;
}