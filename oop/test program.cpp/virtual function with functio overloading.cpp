#include<iostream>
using namespace std;
class Add
{
  public:
  virtual void sum(int a ,int b)
  {
    cout<<"sum is "<<a+b<<endl;
  } 
};
class Multiply:public Add
{
    public:
    void sum(int a ,int b)
    {
        cout<<"the sum is"<<a+b<<endl;
    }
};
int main()
{
    Add *A;
    Multiply m;
    A=&m;
    A->sum(10,20);
    A->sum(70,80);
    return 0;
}