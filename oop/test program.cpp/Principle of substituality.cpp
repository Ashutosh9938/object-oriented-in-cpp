#include<iostream>
using namespace std;
class Ma
{
    public:
    void dai()
    {
        cout<<"THANK YOU VAI";
    }
};
class Uh:public Ma 
{
    public:
    void dai()
    {
        cout<<"huncha dai";
    }
};
void displaydai(Ma I)
{
    I.dai();
}
void displayvai()
{
    Uh P;
    cout<<"dai jindabad"<<endl;
    displaydai(P);
}
int main()
{
    displayvai();
    return 0;
}