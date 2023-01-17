//wap to concatenated two string name and address using concept of containership.
#include<iostream>
using namespace std;
class Me
{
    char name;
    public:
    void input()
    {
        cout<<"my name is ashutosh"<<endl;
    }
};
class US
{
    Me M;
    char address;
    public:
    void inputa()
    {
        M.input();
        cout<<"my address is chabahil"<<endl;
    }
};
int main()
{
    US U;
    U.inputa();
    return 0;
}