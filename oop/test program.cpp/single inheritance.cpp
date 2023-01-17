#include<iostream>
using namespace std;
class Person
{
    int age;
    char name[50];
    public:
    void read()
    {
        cout<<"enter name & age"<<endl;
        cin>>age>>name;
    }
    void dispaly()
    {
        cout<<"info of person is"<<age<<endl<<name<<endl;
    }
};
class Student:public Person
{
    int rollno,marks;
    public:
    void read2()
    {
        cout<<"enter rollno & marks"<<endl;
        cin>>rollno>>marks;
    }
    void display2()
    {
        cout<<"info of student is"<<rollno<<marks<<endl;
    }
};
int main()
{
    Student s;
    s.dispaly();
    s.display2();
    s.read2();
    s.read();
    return 0;

}