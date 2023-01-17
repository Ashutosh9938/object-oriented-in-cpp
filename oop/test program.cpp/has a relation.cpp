// Define a class Address that has attributes country, province
//number, municipality name and ward number. Define a class Student
//with attributes relative to student. Write a program to use aggregation
//to represent “Student has Address”.
#include<iostream>
using namespace std;
class Address
{
    char address[50];
    public:
    void inputaddress()
    {
        cout<<"enter your address"<<endl;
        cin>>address; 
    }
    void displayaddress()
    {
        cout<<"your addresss is "<<address<<endl;
    }
};
class Student
{
    Address aobj;
    int wardno;
    char name[50];
    public:
    void inputinfo()
    {
        aobj.inputaddress();
        cout<<"enter name & ward no"<<endl;
        cin>>name>>wardno;
    }
    void displayinfo()
    {
        aobj.displayaddress();
        cout<<"your name & ward no is "<<name<<endl<<wardno<<endl;
    }
};
int main()
{
    Student S;
    S.inputinfo();
    S.displayinfo();
    return 0;
}