#include<iostream>
#include<string>
using namespace std;

class mobile
{
    private:
    string name;
    double phno , charge , days;
     
    public:
    void input()
    
    {
        cout<<"Enter customer's name: "<<name<<endl;
        cin>>name;
        cout<<"Enter customer's phone number: "<<phno<<endl;
        cin>>phno;
        cout<<"number of days: "<<days<<endl;
        cin>>days;
    }
    void display()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"Ph No.: "<<phno<<endl;
        cout<<"No. Of Days For Rent: "<<days<<endl;
        cout<<"Charge per day: "<<charge<<endl;
    }
    void calc()
    {
        if (days<=5)
        charge=500;
        else if(days=6 || days<10)
        charge=400;
        else (days>10);
        charge=200;
    }
};
int main()
{
    mobile m;
    m.input();
    m.calc();
    m.display()
}

//variable error