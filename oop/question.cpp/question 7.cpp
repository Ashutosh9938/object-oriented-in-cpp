#include<iostream>
using namespace std;
class Person
{
    char name[50];
    int age;
    public:
    void input()
    {
        cout<<"enter name and age"<<endl;
        cin>>name>>age;
    }
    void dispaly()
    {
        cout<<"your name & age is"<<name<<endl<<age<<endl;
    }
};
class Student:public Person
{
    int idno, semester;
    public:
    void inputs()
    {
        cout<<"enter your idno & semester"<<endl;
        cin>>idno>>semester;
    }
    void displays()
    {
        cout<<"your idno & semester is "<<idno<<endl<<semester<<endl;
    }
};
class Employee:public Person
{
    int id,x;
    public:
    void inpute()
    {
        cout<<"enter your id"<<endl;
        cin>>id;
        cout<<"your salary is"<<x<<endl;
    }
    Employee(){}
    Employee(long int salary)
    {
        x=salary;
    }
    Employee(Employee & E)
    {
        id=E.id;
        x=E.x;
        E.input();
        E.dispaly();
    }
};
int main()
{
    Employee E1(23000);
    Student S;
    Employee E2(E1);
    S.inputs();
    S.displays();
    E1.inpute();
     
    return 0;
}