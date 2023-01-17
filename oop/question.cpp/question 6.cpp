#include<iostream>
using namespace std;
class Complex
{
    int real, img ;
    public:
    Complex(){}
    Complex(int x , int y)
    {
        real=x;
        img=y;
    }
    Complex operator + (Complex c1)
    {
        Complex c2;
        c2.real=c1.real+real;
        c2.img=c1.img+img;
        return c2;
    }
    void display()
    {
        cout<<"Sum of two complex are"<<real<<"+"<<"i"<<img<<endl;
    }
};
int main()
{
    Complex c2,c4(4,4),c5(5,7);
    c2= c4+c5;
    c2.display();
    return 0;
}