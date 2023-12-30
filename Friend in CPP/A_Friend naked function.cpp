
#include<iostream>
#include<conio.h>
using namespace std;
class category
{
  private:
    int x;
    
    void fun()
    {
      cout<<"\nPrivate function called"<<endl;
    }
  protected:
    int y;
    
    void gun()
    {
      cout<<"\nProtected function called"<<endl;
    }
  public:
    int z;
    category()
    {
      x=100;
      y=200;
      z=500;
      cout<<"category constructor called"<<endl;
    }
    void sun()
    {
      cout<<"\nPublic function called"<<endl;
    }
    ~category()
    {
      cout<<"\nCategory destructor called."<<endl;
    }
        
    friend void outside_fun();
};

///Outside function but friend of class category. 
///hence access private as well as protected member and member function.
 
void outside_fun()
{
  category obj;
  cout<<"This is outside function. "<<endl;
  cout<<obj.x<<endl;
  cout<<obj.y<<endl;
  cout<<obj.z<<endl;
  obj.fun();
  obj.gun();
  obj.sun();
}
int main() 
{
  outside_fun();
  cout<<"\nback to main function. ";
  getch() ;
  return 0;
}