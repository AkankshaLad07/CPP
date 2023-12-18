//program oc static behaviour of class

#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
  public:
    int i;
    static int j;
    
    demo()
    {
      i=10;
    }
    void fun()
    {
      cout<<i<<endl;
      cout<<j<<endl;
    }
    static void gun()
    {
      // cout<<i;        //  not allowed
       cout<<j<<endl;
    }
};

int demo::j=20;

int main() 
{
  demo z;
  cout<<sizeof(z)<<endl;   //  4
  cout<<z.i<<endl;         //  10
  cout<<z.j<<endl;         //  20
  z. fun();                //  10  20
  z. gun();                //  20
  getch();
  return 0;
  
}