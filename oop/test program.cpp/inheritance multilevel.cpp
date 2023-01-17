//Define a class Student which has roll number and member functions to input and display roll
//number. Derive a class Examination from class Student which has marks of two subjects and
//member functions to initialize and display marks. Again derive a class Result from class Examination
//and calculate total and display the result.

#include<iostream>
using namespace std;
class Student
{
    int rollno;
    public:
     void inputDetails()
     {
        cout<<"enter your roll number"<<endl;
        cin>>rollno;
     }
    void displayDetails()
    {
        cout<<"your roll no is "<<rollno;
    }
};
class Examanition:public Student
{
    int sub1,sub2,total;
    public:
    void setmarks()
    {
        cout<<"enter your mark"<<endl;
        cin>>sub1>>sub2;
    }
    void dispaly()
    {
        cout<<"your marks are "<<sub1<<endl<<sub2<<endl;
    }
    void add(){
        total=sub1+sub2;
    }
};
class Result:public Examanition
{
    int totalmarks;
    public:
    void displayresult()
    {
        cout<<"your total result is"<<totalmarks<<endl; 
    }
};
int main()
{
    Result R;
    R.inputDetails();
    R.setmarks();
    R.add();
    R.displayDetails();
    R.dispaly();
    R.displayresult();
    return 0;
}
