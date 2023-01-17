/*Write a program to define a class Time with data members hours, minutes
and seconds. Overload binary plus operator(+) to add two times.
a. Using operator function as member function
b. Using operator function as friend function*/
#include<iostream>
using namespace std;

class Time
{
    int hour , minute , second;
    int time;
    public:
    Time(){}
    Time(int x, int y, int z)
    {
        hour=x;
        minute=y;
        second=z;
    }
    void sumtime (int second)
    {
       hour=(second/3600);
       minute=(second/3600)/60;
       second=(second/3600)%60;
    }
    void display()
    {
        cout<<"the time is "<<hour<<":"<<minute<<":"<<second;
    }
    Time operator+(Time T1)
    {
        Time T2;
        T2.hour=T1.hour+hour;
        T2.minute=T1.minute+minute;
        T2.second=T1.second+second;
        return T2;
    }
};
int main()
{
    Time T3,T4(4,30,40),T5(6,40,50);
    T3=T4+T5;
    T3.display();
    T4.display();
    T5.display();
    return 0;
}
/* using operator as friend function
#include<iostream>
using namespace std;

class Time
{
    public:
    int hour , minute , second;
    int time;

    Time(){}
    Time(int x, int y, int z)
    {
        hour=x;
        minute=y;
        second=z;
    }
    void sumtime (int second)
    {
       hour=(second/3600);
       minute=(second/3600)/60;
       second=(second/3600)%60;
    }
    void display()
    {
        cout<<"the time is "<<hour<<":"<<minute<<":"<<second;
    }
    friend Time operator+(Time T1,Time T6);
};
Time operator+(Time T1,Time T6)
    {
        Time T2;
        T2.hour=T1.hour+T6.hour;
        T2.minute=T1.minute+T6.minute;
        T2.second=T1.second+T6.second;
        return T2;
    }
int main()
{
    Time T3,T4(4,30,40),T5(6,40,50);
    T3=T4+T5;
    T3.display();
    T4.display();
    T5.display();
    return 0;
}*/