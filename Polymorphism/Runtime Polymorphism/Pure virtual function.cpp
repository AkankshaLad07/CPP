//Program for pure virtual function

#include<iostream>
#include<conio.h>
using namespace std;

class Category
{
  public:
    Category()
    {
      cout<<"\nInside category constructor. ";
    }
    ~Category()
    {
      cout<<"\nCategory destructor is called. ";
    }
    virtual void show(int )=0;
    
    void set()
    {
      int num;
      cout<<"\nEnter any number : ";
      cin>>num;
    }
};
class Product:public Category
{
  private:
    int P_Id;
  public:
    int C_Id;
    
    Product()
    {
      cout<<"\nInside product constructor. ";
    }
    ~Product()
    {
      cout<<"\nProduct destructor called. ";
    }
    
    void show(int No)
    {
      cout<<"\nInside show function "<<No;
    }
};
int main() 
{
    Product pObj;
    pObj. show(15);
    pObj. set();
    
    getch();
    return 0;
    
}