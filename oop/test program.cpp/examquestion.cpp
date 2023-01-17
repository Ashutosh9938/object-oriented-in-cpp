#include <iostream>
class String
{
    char x[50],y[50],z[50];
    public:
    String(){}
    String(char a[50],char b[50]) 
    {
        strcpy(x,a);
        strcpy(y,b);
        strcpy(z,c);
    }
    void operator+(String s1){
        String s2;
        s2.z=s1.x+s1.y;
    }
    void operator==()
    {
        if (x==y){
            cout<<"they are equal"<<endl
        }
        else{
            return 0;
        }
    }
    void display()
    {
        cout<<"your result"<<x<<y<<endl;
    }
};
int main()
{
    String.s;
    +s;
    ==s;
    s.display();
    return 0;
}