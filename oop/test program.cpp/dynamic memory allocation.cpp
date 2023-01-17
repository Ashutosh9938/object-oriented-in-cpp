#include<iostream>
using namespace std;
class Student
{
    int *rollno;
    public:
    Student(){}//defult constructor
    Student(Student & s)//copy constructor
    {
        int *rollno=new int(50);
        rollno=(s.rollno);
        cout<<"info of student is "<<endl;
    }
    void display()
    {
        cout<<"name & roll no of student is"<<rollno<<endl;
    }
    ~Student()
    {
        delete rollno;

    }
};
int main()
{
    Student S2;
    Student *S1=new Student;
    S2.display();
    return 0;
}