//Create a class called Mountain with data members name, height
//and location. Use constructor that initialize the members to the
//values passed to it as parameters. A function cmpHeight() to compare
//height of two objects and function displayInfo() to display information
//of mountain. In main create two objects of the class mountain and
//display the information of mountain with greatest height. 
#include<iostream>
#include<string.h>
using namespace std;
class Mountain
{
    int height;
    char name [50] , location [50] ;
    int e;
    int f;
    public:
    Mountain(){}
    Mountain(char a [50],char b [50],int c)
    {
        strcpy(name,a);
        strcpy(location,b);
        c=e;
        c=f;
    }
    
    void cmpheight()
    {
      if (f<e)
    {
        cout<<"Everest it is higher"<<endl;
    }
       else
    {
        cout<<"."<<endl;
    }
    }
    void dispalyinfo()
    {
        cout<<"The information of mountain is"<<endl<<"name = "<<name<<endl<<"location = "<<location<<endl<<"height = "<<height<<endl;
    }
};
int main()
{
   Mountain m1 (" everest", "nepal",8848) , m2("aurnapurna","nepal",7344),m4;
   m1.dispalyinfo();
   m2.dispalyinfo();
   m4.cmpheight();
   return 0;
}