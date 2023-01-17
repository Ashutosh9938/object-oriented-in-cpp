// Write a program to define a class Rational. Use constructor to
// initialize the values of data members of object (i.e num and denum)
// and display the rational number. Use appropriate member functions as
// / required.
#include<iostream>
using namespace std;
class Rational
{
    int x,y;
    public:
     Rational()
    {}
     Rational(int a, int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"the rational numbers are"<<x<<"/"<<y<<endl;
    }
};
int main()
{
    Rational r(4,5);
    r.display();
    return 0;
}