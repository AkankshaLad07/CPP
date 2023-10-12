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
void area(int x)
{
    int l=0,b=0,area=0;
    l=x;
    b=6;
    area=l*b;
    cout<<"\nArea of rectangle : "<<area;
}
void area(int x,int y)
{
    int l=0,b=0,area=0;
    l=x;
    b=y;
    area=l*b;
    cout<<"\nArea of rectangle : "<<area;

}
int main()
{
    area();
    area(4);
    area (7,12);
    getch();
    return 0;
}
