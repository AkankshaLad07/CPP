//Program for static characteristics, behaviour, object. 

#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
  public:
    int n1;
    static int n2;
    float p;
    
    demo()
    {
      n1=n2=0;
      p=0.0;
      cout<<"\nInside default constructor--> ";
    }
    demo(int num1, int num2, float f)
    {
      n1=num1;
      n2=num2;
      p=f;
      cout<<"\nInside parameterized cconstructor-->";
    }
    void change()
    {
      n1=20;
      n2=40;
      p=60.00;
      cout<<"\n\tInside non-static change function . ";
    }
    static void modify()
    {
      //n1=10;
      n2=10;
     // p=10.0;
      cout<<"\n\tInside static modify function . ";
    }
    ~demo()
    {
      cout<<"\ndestructor is called. "<<n1;
    }
};

int demo::n2=100;

int main() 
{
  cout<< "\n\t\t Value of static class variable = " << demo:: n2 << endl;
  demo::modify();
  cout << "\n\t\t New Value static of class variable = " << demo :: n2 << endl;
  demo Obj1;
  cout << "\n\t\t Object Values => " << Obj1.n1 << " \t " << Obj1.n2 << " \t " << Obj1.p << endl;
  Obj1.change();
  cout << "\n\t\t Object Values => " << Obj1.n1 << " \t " << Obj1.n2 <<" \t " << Obj1.p<< endl;
  getch();

   demo Obj2(55,75,95.59);

   cout << "\n\t\t Values of object 1 => " << Obj1.n1 << " \t " << Obj1.n2 << " \t " << Obj1.p << endl;

   cout << "\n\t\t Values of object 2 => "<< Obj2.n1 << " \t " << Obj2.n2 << " \t " << Obj2.p << endl;

   demo :: modify();

   static demo Obj3;
   cout << "\n\t\t Values of static object 3 => " << Obj3.n1 << " \t " << Obj3.n2 << " \t " << Obj3.p << endl;

   getch();
   return 0;
}


        

        

        

        

         

        