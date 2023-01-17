#include<iostream>
using namespace std;
class Complex
{
    int x,y;
    public:
    void input()
    {
        cout<<"enter two complex numbers"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"sum of two complex numbers are"<<x<<"+"<<"i"<<y<<endl;
    }
    friend void addcomplex(Complex,Complex);
};
void addcomplex(Complex C1 , Complex C2 )
{
    Complex cobj;
    cobj.x=C1.x+C2.x;
    cobj.y=C1.y+C2.y;
    cobj.display();
}
int main()
{
    Complex c1,c2;
    c1.input();
    c2.display();
    addcomplex(c1,c2);
    return 0;
}