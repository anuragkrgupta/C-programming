#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
   string name,age;

    double m1,m2,m3,max,min;
    public:
    void input()
    {
        cout<<"Enter your name"<<name<<endl;
        cin>>name;
        cout<<"Enter your age"<<age<<endl;
        cin>>age;
        cout<<"Enter your mark on 1st sub"<<m1<<endl;
        cin>>m1;
        cout<<"Enter your mark on 2nd sub"<<m2<<endl;
        cin>>m2;
        cout<<"Enter your mark on 3rd sub"<<m3<<endl;
        cin>>m3;
    }
    void display()

{
    cout<<"NAME: "<<name<<endl;
    cout<<"AGE: "<<age<<endl;
    cout<<"MARK ON 1ST SUBJECT: "<<m1<<endl;
    cout<<"MARK ON 2ND SUB: "<<m2<<endl;
    cout<<"MARK ON 3ND SUB: "<<m3<<endl;
    cout<<"MAXIMUM MARKS: "<<max<<endl;
    cout<<"MINIMUM MARKS: "<<min<<endl;
}
void calc()
{
   
}
};
int main()
{
    student ob;
    ob.input();
    ob.calc();
    ob.display();
}
//calculation part//