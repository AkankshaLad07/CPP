//Function overloading with access specifier. 

#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  public:
    void fun(int i)
    {
      cout<<"\nPublic function call";
    }
    
   private:
     void fun(int i)
     {
       cout<<"\nPrivate function call";
     }
};
int main() 
{
  demo obj;
  obj. fun(5);
  obj. fun(7);
  getch() ;
  return 0;
}