#include<iostream>
using namespace std;
class Nobody
{
    int x;
    public:
    Nobody(){}
    Nobody(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<"value of x ="<<x<<endl;
    }
};
class Everybody:public Nobody
{
    int y;
    public:
    Everybody(){}
    Everybody(int b)
    {
        y=b;
    }
    void display()
    {
        cout<<"value of y ="<<y<<endl;
    }
};
int main()
{
    Nobody *nptr,N(10);
    nptr=&N;
    nptr->display();
    Everybody E(20);
    nptr=&E;
    nptr->display();
    return 0;
}