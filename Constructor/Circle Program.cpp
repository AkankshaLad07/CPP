#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
  public:
    float Rad, Area, Circum;
    
    Circle();
    Circle(float R);
    Circle(Circle &);
    
    void Area_circle();
    void Circumference_circle();
    void Display_details();
    
    ~Circle();
    
  private:
    float Pi;
};
Circle::Circle()
{
  Rad=Area=Circum=0;
  cout<<"\nInside default constructor";
}
Circle::Circle( float R)
{
  
  cout<<"\nInside parameterised constructor";
  Rad=R;
  Area_circle();
  Circumference_circle();
}
Circle::Circle(Circle &t)
{
  cout<<"\nInside Copy constructor";
  Rad=t.Rad;
  Area=t.Area;
  Circum=t.Circum;
  
}
void Circle::Area_circle()
{
  Pi=3.14;
  Area=Pi*Rad*Rad;
}
void Circle::Circumference_circle()
{
  Pi=3.14;
  Circum=2*Pi*Rad;
  
}
void Circle::Display_details()
{
  cout<<"\nArea is "<<Area;
  cout<<"\nCircumference is "<<Circum;
}
Circle::~Circle()
{
  cout<<"\nDestructor is called "<<Rad;
}

int main()
{
  Circle C1;
  getch();
  
  Circle C2(5);
  C2.Display_details();
  getch();
  
  Circle C3(C1);
  C3.Area_circle();
  C3.Circumference_circle();
  C3.Display_details();
}