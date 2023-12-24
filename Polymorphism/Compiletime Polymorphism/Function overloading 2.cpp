#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  public:
    void fun(int i)
    {
      cout<<"\nfunction with integer type";
    }
    void fun(double f)
    {
      cout<<"\nFunction with double type";
    }
    void fun(char c)
    {
      cout<<"\nFunction with char type";
    }
};
int main() 
{
  demo Dobj;
  Dobj.fun(8);
  Dobj.fun(56.90);
  Dobj.fun('t');
  getch() ;
  return 0;
}