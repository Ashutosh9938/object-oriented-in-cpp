#include<iostream>
using namespace std;
class ABC
{
    int a ,b;
    public:
    ABC()//default constructor
    {
        a=0;
        b=0;
    }
    ABC(int x,int y)//parameterised constructor
    {
        a=x;
        b=y;
    }
    ABC ( ABC & S )//copy constructor
    {
        a=S.a;
        b=S.b;
    }
    void display()
    {
        cout<<"value of a is ="<<a<<endl;
        cout<<"value of b is="<<b<<endl;
    }
};
int main()
{
    ABC M(10,30);
    cout<<"obj1"<<endl;
    M.display();
    ABC YO;
    cout<<"obj2"<<endl;
    YO.display();
    ABC c(M);
    cout<<"obj3"<<endl;
    c.display();
    return 0;
}
