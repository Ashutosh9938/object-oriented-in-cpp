#include <iostream>
using namespace std;
class Distance
{
  int feet , inch;
  public:
  void input()
  {
      cout<<"enter feet & inches "<<endl;
      cin >> feet >> inch;
  }
  void addDistance(Distance D1, Distance D2)
  {
      feet=D1.feet+D2.feet;
      inch=D1.inch+D2.inch;
  }
  void display()
  {
      cout<<"sum is"<<feet<<"feet"<<"'"<<inch<<"inch"<<endl;
  }
};
int main()
{
    Distance x ,y ,z;
    x.input();
    y.input();
    z. addDistance(x,y);
    z.addDistance(x,y);
    z.display();
  
    
    
    return 0;
}