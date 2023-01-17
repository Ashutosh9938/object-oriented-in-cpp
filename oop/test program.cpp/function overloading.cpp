//Write a program to calculate volume of rectangular box, sphere and
//cylinder. Use calculateVolume() function to calculate the result. Use
//concept of function overloading.
#include<iostream>
using namespace std;
void calculatevolume(int l, int b,int h)
{
    cout<<" volume of rectangle "<<l*b*h<<endl;
}
void calculatevolume(int r)
{
    cout<<"volume of sphere"<<1.333*3.14*r<<endl;
}
void calculatevolume(int r, int h)
{
    cout<<"volume of cylinder"<<3.14*r*r*h<<endl;
}
int main()
{
    calculatevolume(4,7,6);
    calculatevolume(8);
    calculatevolume(7,9);
    return 0;
}
