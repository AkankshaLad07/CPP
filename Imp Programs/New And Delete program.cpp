#include<iostream>
#include<conio.h>
using namespace std;
class product
{
  public:
    int i;
    
    product()
    {
      i=0;
      cout<<"\nConstructor called. ";
    }
    
    void fun()
    {
      i=100;
      cout<<"\nFunction called "<<i<<endl;
    }
    ~product()
    {
      cout<<"\nDestructor called "<<i<<endl;
    }
};
int main() 
{
  product *n=new product();
  
  n->fun();
  delete n;
  getch() ;
  return 0;
}