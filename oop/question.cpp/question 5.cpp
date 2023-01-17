#include<iostream>
using namespace std;
class A
{
    public:
    int x,y,c;
    void display()
    {
        cout<<"sum of two numbers are"<<c<<endl;
    }
    friend void add(int,int);//friend function
};
void add(int a, int b)
{
    int c;
    A Fobj;
    Fobj.c= a + b;
}
int main()
{
    A gspo;
    gspo.display();
    add (10,11);
    return 0;
}