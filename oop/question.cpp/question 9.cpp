#include<iostream>
using namespace std;
int main()
{
    int *ptra, *ptrb;
    //dynamic memory allocation 
    ptra=new int;
    ptrb=new int;
    *ptra=20;
    *ptrb=60;
    cout<<*ptra<<*ptrb<<endl;
    //delete memory allocation 
    delete ptra;
    delete ptrb;
    return 0;
}