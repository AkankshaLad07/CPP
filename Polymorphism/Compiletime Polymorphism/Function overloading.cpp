#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  public:
  demo()
  {
    cout<<"\nDefault constructor called";
  }
  void fun(int n)
  {
    cout<<"\n1 parameter function is called"<<n;
  }
  void fun(int n1, int n2)
  {
    cout<<"\n2 parameter function is called"<<n1<<"\t"<<n2;
  }
  ~demo()
  {
    cout<<"\nDestructor is called";
  }

};
int main() 
{
  demo k;
  k. fun(6);
  k. fun(4,9);

getch() ;
return 0;
}