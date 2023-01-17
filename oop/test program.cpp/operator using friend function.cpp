//Write a program to overload unary - operator and the operator function returns object
//such that complexOne = -complexTwo;
// where complexOne and complexTwo are complex
//numbers
//a. Using operator function as member function
//b. Using operator function as friend function
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
   // void operator-()
    //{
        //a=-a;
      //  b=-b;
    //}
    void display(){
        cout<<"the value are"<<endl<<a<<endl<<b<<endl;
    }
    friend void operator - ( Complex D);
};
void operator-(Complex D)
{
    D.a=D.a;
    D.b=D.b;
}
int main()
    {
        Complex c(15,20);
        -c;
        c.display();
        return 0;

    }