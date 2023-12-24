//Functiin overloading with implicit function call. 

#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  public:
    void fun(int i)
    {
      cout<<"\nint Function called"<<i;
    }
    void fun(double d)
    {
      cout<<"\nDouble function called"<<d;
    }
};
int main() 
{
  demo Dobj;
  Dobj. fun('S');
  Dobj. fun(67);
  Dobj. fun(89.5f);
  getch() ;
  return 0;
}