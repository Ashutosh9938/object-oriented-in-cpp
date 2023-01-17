#include<iostream>
using namespace std;
class Student
{
    int x;
    static int count;
    public:
    void input()
    {
        cout<<"enter no of students"<<endl;
        cin>>x;
        count++;
    }
    void display()
    {
        cout<<"total no of student is"<<x<<endl;
    }
    static void displaycount()//static function
    {
        cout<<"total no of count is"<<count;
    }
};
int Student::count;
int main()
{
    Student s;
    s.input();
    s.display();
    Student::displaycount();//assigning static function
    return 0;
}