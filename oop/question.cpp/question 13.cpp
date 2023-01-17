#include<iostream>
using namespace std;
class Raja
{
    int raja,rani;
    public:
    Raja(){}
    void input()
    {
        cout<<"enter two numbers"<<endl;
        cin>>raja>>rani;
    }

    void operator*(int sum)
    {
        sum=raja*rani;
        cout<<"answer is "<<sum<<endl;
    }
};
int main()
{
    Raja R;
    int  mul;
    R*mul;
    R.input();
    R.operator*(mul);
    return 0;
}