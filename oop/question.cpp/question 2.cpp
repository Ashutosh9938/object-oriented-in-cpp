//how do we make use of a virtual destructor when we need to make sure that different destructor in an ineritance chain are called in 
//order? 
#include <iostream>
using namespace std;
class Result
{
    public:
    Result(){}
    virtual~Result()
    {
        cout<<"this is base class distructor"<<endl;
    }
};
class Test:public Result
{
    int a,b,c;
    public:
    Test(){}
    Test(int x,int y)
    {
        a=x;
        b=y;
    }
    void add()
    {
        c=a+b;
    }
    void display()
    {
        cout<<"the sum is "<<c<<endl;
    }
    virtual ~Test(){
        cout<<"this is derive distructor"<<endl;
    }
};

int main()
{
    Test R(2,3);
    R.add();
    R.display();
    return 0;
}