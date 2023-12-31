#include<iostream>
#include<conio.h>
using namespace std;
class Container
{
  public:
    int x, y, z;
    
    Container()
    {
      x=0;
      y=10;
      z=1000;
      cout<<"\nInside container constructor. ";
      cout<<x<<" "<<y<<" "<<z;

    }
    
    Container(int n1, int n2)
    {
      x=n1;
      y=n2;
      z=200;
      cout<<"\nInside parameterised container constructor. ";
      cout<<x<<" "<<y<<" "<<z;
    }
    
    void modify()
    {
      x=y*5;
      y=z-500;
      cout<<"\nInside modify method 1 .";
    }

    ~Container()
    {
      cout<<"\nDestructor called. "<<x<<" "<<y<<" "<<z;
    }
};
int main() 
{
  Container obj1;
  obj1. modify();
  getch();
  
  Container obj2(15,30);
  getch() ;
  
  Container *obj3=new Container();
  obj3->z=55;
  getch();
  delete obj3;
  return 0;
}