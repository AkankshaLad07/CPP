#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
  private:
        int pri;
  protected:
        int pro;
  public:
        int pub;
    
    Demo()
    {
      pri=150;
      pro=300;
      pub=500;
    }
    friend void outf();
};
void outf()
{
  Demo obj;
  cout<<"\t"<<obj.pri<<"\t"<<obj.pro <<"\t"<<obj.pub;
}
int main() 
{
  outf();
  getch() ;
  return 0;
}