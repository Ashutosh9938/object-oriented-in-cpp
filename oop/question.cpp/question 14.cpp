#include<iostream>
using namespace std;
class A
{
   protected:
   int x;
   public:
   void setvalue()
   {
    cout<<"value of x is"<<endl;
    x=15;
   }
};
class B: public A
{
    int y=19;
    public:
    void display()
    {
        cout<<"value of y is"<<y<<endl;
    }

};
int main()
{
    B W;
    W.setvalue();
    W.display();
    return 0;
}