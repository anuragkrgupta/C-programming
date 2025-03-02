#include<iostream>
#include<string>
using namespace std;

class salary
{
    private:
    string name,address,subspe,phone;

    double msal,it,asal;
    public:
    void input()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your address: ";
        cin>>address;
        cout<<"Enter your subject specialization: ";
        cin>>subspe;
        cout<<"Enter your phone number: ";
        cin>>phone;
        cout<<"Enter monthly salary: ";
        cin>>msal;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Subject specialization: "<<subspe<<endl;
        cout<<"phone number: "<<phone<<endl;
        cout<<"monthly salary: "<<msal<<endl;
        cout<<"income tax: "<<it<<endl;
    }
    void calc()
    {
        double asal;
        asal=12*msal;
        if (asal>175000)
          it= (5/100*(asal-175000));
        else
        it=0;        
    }
};
int main()
{
    salary ob;
    ob.input();
    ob.calc();
    ob.display();
}

//calc part//