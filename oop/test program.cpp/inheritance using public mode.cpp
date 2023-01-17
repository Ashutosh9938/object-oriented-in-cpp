#include<iostream>
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
class XYZ: public ABC
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
x = getA() + b + c;
}
void XYZ :: displayResult()
{
cout<<endl<<"Result after addition is : "<< x <<endl;
}
int main()
{
XYZ obj;
obj.setValue();
obj.displayValue();
obj.calculate();
obj.displayResult();
// obj.b =200; //protected members are not accessible outside class.
obj.c =100; //public members are accessible outside class
cout << endl <<"After updating the value of public member c :"<<endl;
obj. displayValue();
return 0 ;
}
// moral : private ra protected member ma vako variable jastei int a, int b lai main ma value asign garna mildeina 