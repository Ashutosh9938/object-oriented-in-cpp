#include<iostream>
using namespace std;
class Player
{
    int number,goal,assist,total;
    int i;
    public:
    Player(){}
    Player(int a,int b, int c)
    {
        number=a;
        goal=b;
        assist=c;
    }
    void bestplayer()
    {
        total=goal+assist;
    }
    Player operator >(Player a)
    {
        Player b;
        if(a.total>b.total)
        {
            for(i=0;i<11;i++){
            cout<<"the player with higest goal and assist is"<<number<<total<<endl<<"goal"<<goal<<endl<<"assist"<<assist<<endl;
            }
        }
    }
};
int main()
{
    Player p[11];
    int i;
    for (i=0;i<11;i++)
    {
        
    }
}