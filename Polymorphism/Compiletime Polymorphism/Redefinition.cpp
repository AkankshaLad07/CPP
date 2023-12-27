//Redefinition

#include<iostream>
#include<conio.h>
using namespace std;
class base
{
  public:
    int No;
    
    
    base()
    {
      No=50;
      cout<<"\nInside base constructor";
    }
    ~base()
    {
      cout<<"\nInside base destructor";
    }
    void fun(int Num)
    {
      cout<<"\nbase class function called"<<Num;
    }
    void accept()
    {
      cout<<"\nEnter any number : ";
      cin>>No;
    }
    
};
class derived: public base
{
  private:
    int D_no;
  public:
    int No;
      
    derived()
    {
      No=100;
      D_no=0;
      cout<<"\nInside derived constructor"<<endl;
    }
    ~derived()
    {
      cout<<"\nInside derived destructor"<<endl;
    }
    void fun(int num)
    {
      cout<<"\nderived class function called"<<num<<endl;
    }
};
int main() 
{
  derived obj;
  cout<<obj.No<<endl;
  getch();
  cout<<obj.base::No<<endl;
  obj. fun(5);
  obj. accept();
  obj. base::fun(45);
  getch() ;
  return 0;
}