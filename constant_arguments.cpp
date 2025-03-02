//computing
#include<iostream>
using namespace std;
void compute(int a, int b,const float pi)
{ 
    a=a+10;
    b=b+10;
    //pi=pi+1; //(you can't change)
    cout<<a<<" "<<b<<" "<<pi;
}
int main()
{
    compute (200,400,12);
}