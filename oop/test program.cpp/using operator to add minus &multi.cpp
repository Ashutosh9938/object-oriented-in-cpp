/*Define a class Complex with data members real and img. Write a
program to overload binary (+) operator to add two Complex numbers,
binary minus (–) operator to subtract two Complex number and
multiplication operator (*) to multiply two Complex numbers*/
#include<iostream>
using namespace std;
class Complex
{
    int real , img;
    public:
    Complex(){}
    Complex(int x,int y){
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"sum = "<<real<<"+"<<"i"<<img<<endl;
    }
    void displayM()
    {
        cout<<"multiplaction ="<<real<<"*"<<"i"<<img<<endl;
    }
    void displayS()
    {
        cout<<"substraction="<<real<<"-"<<"i"<<img<<endl;
    }
    Complex operator+(Complex c1)
    {
        Complex c2;
        c2.real=c1.real+real;
        c2.img=c1.img+img;
        return c2;
    }
    Complex operator-(Complex c1)
    {
        Complex c2;
        c2.real=c1.real-real;
        c2.img=c1.img-img;
        return c2;
    }
    Complex operator*(Complex c1)
    {
        Complex c2;
        c2.real=c1.real*real;
        c2.img=c1.img*img;
        return c2;
    }
};
int main()
{
    Complex C2 ,F,X, c3(2,5) ,c4(6,9);
    C2=c3+c4;
    F=c3-c4;
    X=c3*c4;
    C2.display();
    F.displayS();
    X.displayM();
    return 0;
}