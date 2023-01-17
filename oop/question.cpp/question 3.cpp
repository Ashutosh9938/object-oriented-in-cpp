#include <iostream>
using namespace std;
class One
{
    public:
    int x;
    One(){}
    One(int a)
    {
        x=a;
    }
    virtual void setvalue()
    {
        cout<<"value is "<<x<<endl;
    }
    friend void max(int x);
};
class Two
{
    int y;
    public:
    Two(){}
    Two(int b)
    {
        y=b;
    }
    void setvalue()
    {
        cout<<" value is"<<y<<endl;
    }
    friend void max(int y); 
};
void max(int x,int y)
{
    if(x>y)
    {
        cout<<x<<"is garter"<<endl;
    }
    else
    {
        cout<<y<<"is grater"<<endl;
    }
}

int main()
{
    One a(30);
    Two b(20);
    a.setvalue();
    b.setvalue();
    max(20,30);
    return 0;
}