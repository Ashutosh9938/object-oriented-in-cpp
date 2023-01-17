#include<iostream>
using namespace std;

 inline int add( int a, int b){
    return(a*b);
}
int main()
{
    int a ,b,mul;
    cout<<"enter value of a & b"<<endl;
    cin>>a>>b;
    mul=a*b;
    cout<<"the product is"<<mul<<endl;
    return 0;
}