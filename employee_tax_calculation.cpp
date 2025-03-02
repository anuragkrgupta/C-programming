#include<iostream>
#include<string>
using namespace std;

class employee
{
    private:
    int pan;
    string name;
    double tax,ti;

    public:
    void input()
    {
    cout<<"Enter your personal account number: "<<pan<<endl;
    cin>>pan;
    cout<<"Enter your name: "<<name<<endl;
    cin>>name;
    cout<<"Enter your taxable income: "<<ti<<endl;
    cin>>ti;
    }
    void display()
    {
        cout<<"PERSONAL ACC NO. : "<<pan<<endl;
        cout<<"NAME: "<<name<<endl;  
        cout<<"TAX: "<<tax<<endl;
        cout<<"TAXABLE INCOME: "<<ti<<endl;
    }
    void calc()
    {
        double asal;
        if (asal>200000)
        ti=8/100*(asal-200000);
        else
        ti=0;
    }
};
int main()
{
    employee tax;
    tax.input();
    tax.calc();
    tax.display();
}

//CALC PART //