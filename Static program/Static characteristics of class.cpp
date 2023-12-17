
#include<iostream>
#include<conio.h>
using namespace std;

class Demo
{
  public:
    static int i;        //static variable or class variable
    int j, k;            //non-static variable or instance variable
    
    Demo()
    {
      j=10;
      k=20;
    }
    
};

int Demo::i=30;
int main() 
{
  Demo obj1, obj2;
  
  cout<<Demo::i<<endl;
  cout<<obj1.i<<endl;
  cout<<obj2.i<<endl;
  cout<<obj1.j<<obj1.k<<endl;
  cout<<obj2.j<<obj2.k<<endl;
  
  obj1. i++;
  
  cout<<obj1.i<<endl;
  cout<<obj2.i<<endl;
  cout<<Demo::i<<endl;
  
  obj1. j++;
  
  cout<<obj1.j<<obj2.j<<endl;
  cout<<sizeof(obj1)<<sizeof(obj2);
  
  getch();
  return 0;
}