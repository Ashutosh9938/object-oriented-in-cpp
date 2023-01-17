#include<iostream>
using namespace std;
//class Derived;
class Base
{
    protected:
    int x, y, sumX, sumY;
    public:
        void input()
        {
            cout<<"Enter x-coordinates of vector i.e. x:"<<endl;
            cin>>x;
            cout<<"Enter y-coordinates of vector i.e. y: "<<endl;
            cin>>y;
        }
        void display()
        {
            cout<<"X = "<<x<<" and Y = "<<y<<endl;
        }
        friend void display(Base);
};
class Derived:public Base
{
    public:
        void addVector(Derived d)
        {
            sumX=x+d.x;
            sumY=y+d.y;
        }
};
void display(Base b)
{
    cout<<"Added Coordinates are: "<<b.sumX<<" and "<<b.sumY<<endl;
}
int main()
{
    Derived obj1, obj2;
    obj1.input();
    cout<<"For next vector: "<<endl;
    obj2.input();
    obj1.addVector(obj2);
    cout<<"After adding: "<<endl;
    display(obj1);   //POS
    return 0;
}