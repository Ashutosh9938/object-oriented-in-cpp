//Write a program to overload binary (+) operator to add two Complex numbers,
//binary minus (–) operator to subtract two Complex number and
//multiplication operator (*) to multiply two Complex numbers
#include<iostream>
using namespace std;
class Add
{
    int x, y;
    public:
    Add(){}
    Add(int a,int b)
    {
       a=x;
       b=y;
    }
    Add operator+(Add a1)
    {
       Add a2;
       a2.x=a1.x+x;
       a2.y=a1.y+y;
       return a2;
    } 
    Add operator-(Add a3)
    {
       Add a4;
       a4.x=a3.x-x;
       a4.x=a3.x-x;
       return a4;
    }
    void display()
    {
      cout<<"sum of two complex number are"<<x<<"+i"<<y<<endl;
      cout<<"substraction of two complex no are"<<x<<"-i"<<y<<endl;
    }

};
int main()
{
Add a7,a5(9,7),a6(5,7);
a7= a5 + a6;
a7=a5-a6;
a7.display();
}