#include<iostream>
using namespace std;

class ABC
{
    int a,b;
    public:
    ABC(){}
    ABC(int a,int b)
    {
        a=10;
        b=20;
    }
    void add()
    {
        int sum;
        cout<<"enter a & b"<<endl;
        cin>>a>>b;
        sum=a+b;
        cout<<"the sum is"<<sum<<endl;
    }

};
int main()
{
    ABC S;
    S.add();
    return 0;
}
