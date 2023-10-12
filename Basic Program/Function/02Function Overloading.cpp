///Program using function overloading.

#include<iostream>
#include<conio.h>
using namespace std;

void area()
{
    int l=9;
    int b=8;
    int area=l*b;
    cout<<"\nArea of rectangle : "<<area;
}
int area(int x)
{
    int s=0,area=0;
    s=x;
    area=s*s;
    cout<<"\nArea of square : "<<area;
    return area;
}
float area(float x,float y)
{
    float h=0,b=0,area=0;
    h=x;
    b=y;
    area=0.5*h*b;
    cout<<"\nArea of triangle : "<<area;
    return area;
}
int main()
{
    area();
    area(4);
    area (7,12);
    getch();
    return 0;
}
