#include <iostream>
using namespace std;
class Time
{
    int hrs,min,sec;
    public:
    void input()
    {
        cout<<"enter hrs,min,sec"<<endl;
        cin>>hrs>>min>>sec;
    }
    void addTime(Time t1,Time t2)
    {
        
        hrs=(min/3600);
        min=(sec/3600)/60;
        sec=(sec/60);
        hrs=t1.hrs+t2.hrs;
        min=t1.min+t2.min;
        sec=t1.sec+t2.sec;
    }
    void display()
    {
        cout<<hrs<<":"<<min<<":"<<sec<<endl;
    }
};


int main() {
    Time x,y,z;
    x.input();
    y.input();
    z.addTime(x,y);
    z.display();

    return 0;
}