//array as parameter
#include<iostream>
using namespace std;

void print(int A[],int lenght)
{
    for(int n=0; n<lenght ;n++)
    cout<<A[n]<<" ";
    cout<<"\n";

}
int main()
{
    int arr[]={5,10,15};
    print(arr,3);
    return 0;
}