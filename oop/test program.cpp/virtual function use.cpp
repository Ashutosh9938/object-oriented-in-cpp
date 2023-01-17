#include<iostream>
using namespace std;
class Base
{
public :
virtual void display()
{
cout<<"This is base "<<endl;
}
};
class Derived: public Base
{
public :
void display()
{
cout<<"This is derived "<<endl;
}
};
int main()
{
Base *bptr, bobj;
bptr=&bobj;
cout<<"Calling from Base class's pointerthat points to Base's object"<<endl;
bptr->display();
Derived dobj;

bptr=&dobj;
cout<<endl<<endl<<"Calling from Base class'spointer that points to Derived's object"<<endl;
bptr->display();
return 0;
}