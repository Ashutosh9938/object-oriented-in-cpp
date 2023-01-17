#include <iostream>
#include<cmaths>
using namespace std;
class Polar
{
  int r,ang;
  public:
  Polar(int x,int y)
  {
      r=x;
      ang=y;
  }
  void display()
  {
      cout<<"radius="<<r<<endl<<"angle="<<ang<<endl;
  }
  int getradius()
  {
      return r;
  }
  int getang()
  {
      return ang;
  }
};
class Rectangle
{
  int xco,yco;
  public:
  Rectangle(){}
  
  Rectangle(Polar p)
  {
      xco=p.getradius()*cos ( p.getang()  );
      yco=p.getradius()*sin ( p.getang()  );
  }
  void displayr()
  {
      cout<<"x-coordinate ="<<xco<<endl<<"y-coordinate ="<<yco<<endl;
  }
};
int main()
{
    Polar p1(4,45);
    Rectangle r;
    r=p1;
    p1.display();
    r.displayr();
    return 0;
}