#include<iostream>
using namespace std;
class Person
{
    char name[50];
    int age;
    public:
    void setperson()
    {
        cout<<"enter name & age "<<endl;
        cin>>name>>age;
    }
    void displayperson()
    {
        cout<<"your name & age "<<name<<endl<<age<<endl;
    }
};
class Student:public Person
{
    int roll ,marks;
    public:
    void setstudent()
    {
       cout<<"enter rollno & marks "<<endl;
       cin>>roll>>marks;
    }
    void dispalystudent()
    {
        cout<<"your roll no is"<<roll<<endl;
        cout<<"your marks is"<<marks<<endl;
    }
};
class Employee:public Person
{
   int empyear;
   double salary;
   public:
   void setemploye()
   {
    cout<<"enter employed year & salary"<<endl;
    cin>>empyear>>salary;
   }
   void displayemploye()
   {
    cout<<"your info is "<<empyear<<endl<<salary<<endl;
   }
};
int main()
{
    Employee E;
    Student S;
    E.setperson();
    E.setemploye();
    S.setstudent();
    E.displayperson();
    E.displayemploye();
    S.dispalystudent();
    return 0;
}