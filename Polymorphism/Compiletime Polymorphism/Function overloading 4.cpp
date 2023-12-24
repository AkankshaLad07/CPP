//Functiin overloading with explicit functiin call. 

#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  public:
    void fun(int i)
    {
      cout<<"\nfunction call 1st - "<<i;
    }
    void fun(char c)
    {
      cout<<"\nFunction call 2nd - "<<c;
    }
};
int main() 
{
  demo obj;
  obj. fun(9);
  obj. fun('Y');
  obj. fun((int)45.7f);
  obj. fun((int)'L');
  getch() ;
  return 0;
}