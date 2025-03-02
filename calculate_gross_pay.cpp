//clac gross pay
#include<iostream>
using namespace std;
class employee
{
    private:
    double basic,gp;
    public:
    void input()
    {
        cout<<"Enter employee basic";
        cin>>basic;
    }
    void calc()
    {
    double pf,np,hra,da;
    da=25/100.0*basic;
    hra=15/100.0*basic;
    pf=8.33/100.0*basic;
    np=basic+da+hra;
    gp=np-pf;
    }
    void display()
    {
    cout<<"Grosspay="<<gp;
    }
};
int main()
{
    employee e;
    e.input();
    e.calc();
    e.display();
}