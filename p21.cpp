/*table
 1*1=1
 2*1=2*/
 #include<iostream>
 using namespace std;

 int main()
 {
    int x=1,t;
    cout<<"Enter a number for table ";
    cin>>t;
    while (x<=10)
    {
        cout<<t<<"x"<<x<<"="<<x*t<<endl;
        
        x+=1;
    }
 }
 