#include <iostream>
using namespace std;

template < typename L >
void Swap(L &x,L &y)
{
    cout<<"value of x="<<endl;
    cout<<"value of y="<<endl;
    L temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=20 , b=50;
    Swap(a,b);
    //wap <float>(10.5,40.9);
    char a = 'M',b = 'u';
    Swap (a,b);
    return 0;
}
