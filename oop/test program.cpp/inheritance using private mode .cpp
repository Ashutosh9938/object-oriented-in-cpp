#include<iostream>
#include<conio.h>
using namespace std;
class ABC
{
private:
int a;
protected:
int b;
public:
int c;
void setValue();
void displayValue();
int getA()
{
return a;
}
};
class XYZ: private ABC // replace visibility mode with protected
{
private:
int x;
public :
void calculate();
void displayResult();
};
void ABC :: setValue()
{
cout << "Enter value of a, b and c:";
cin >> a >> b >> c;
}
void ABC :: displayValue()
{
cout << "Value of a : "<<a <<endl ;
cout << "Value of b : "<<b<<endl;
cout << "Value of c : "<<c <<endl;
}
void XYZ :: calculate()
{
setValue(); //accessing setValue() of Base class ABC
x = getA() + b + c;
}
void XYZ :: displayResult()
{
displayValue(); //accessing displayValue() of Base class ABC
cout<<endl<<"Result after addition is : "<< x <<endl;
}
int main()
{
XYZ obj;
/* obj.setValue();
obj.displayValue(); cannot be accessed outside class as XYZ has inherited ABC’s properties
in private mode */
obj.calculate();
obj.displayResult();
// obj.b=200; //private members are not accessible outside class.
//obj.c =100; //private members are accessible outside class
return 0;
}
// moral : yesmani same ho protected ra private ko value asign garna mildeina ani private mode ma base class ko public ra protected
// ni private nei huncha so function of public in use garna payena class bahira