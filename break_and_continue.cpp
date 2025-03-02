//break and continue
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x=1 ,t;
    while (1)//always true
    {
        cout<<"Enter a number";
        cin>>t;
        if(t<0)
        continue;
        if(t==0)
        break;
        cout<<sqrt(t)<<endl;
    }

}
