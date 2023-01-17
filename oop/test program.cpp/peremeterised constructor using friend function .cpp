//Define a class Complex. Write a program to add two complex
//numbers using friend function. Use constructor to initialize the objects.
#include<iostream>
using namespace std;
class Complex
{
    int x,y;
    public:
    Complex(){}
    Complex(int a ,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"sum of complex number are"<<x<<"+"<<"i"<<y<<endl; 
    }
    friend void addcomplex(Complex,Complex);
};
void addcomplex(Complex c1, Complex c2)
{
    Complex c;
    c.x=c1.x+c2.x;
    c.y=c1.y+c2.y;
    c.display();
}
int main()
{
    Complex c4(7,9),c5(9,5);
    addcomplex(c4,c5);
    return 0;
}