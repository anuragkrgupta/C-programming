//infinity loop
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x=1;
    for(;;) //infinity loop
    {
        cout<<++x<<endl;
        if(x==10000)
        break;
    }
}