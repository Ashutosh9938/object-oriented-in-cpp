#include<iostream>
#include <cstring>
#include<string>
using namespace std;
 class Name
 {
   char a[50],b[50];
   char c[50];
   public:
   Name(){}
   Name(char x[50],char y[50])
   {
       strcpy( a, x);
       strcpy(b,y);
   }
   int sab()
   {
        c=strcmp( a, b);
        return c;
       
   }
   void display()
   {
       cout<<"after concadination"<<c<<endl;
   }
 };
 int main()
 {
     Name n("ashutosh","poudel");
     n.display();
     return 0;
 }