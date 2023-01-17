#include <iostream>
using namespace std;
int simpleintrest(int p,int t,float r=2)
{
    return ((p*t*r)/100);
}

int main() {
    int p,t;
    float r,si;
    cout << "enter p & t"<<endl;
    cin>>p>>t;
    si=simpleintrest( p,t, r=5);
    cout<<"simple intrest is:"<<si<<endl;

    return 0;
}