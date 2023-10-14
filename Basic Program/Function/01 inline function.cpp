//Program using inline function.

#include<iostream>
#include<conio.h>
using namespace std;

inline int rect(int x,int y)
{
   return (x*y);
}
int main()
{
        int l=0, b=0;
    cout<<"\nEnter length : ";
    cin>>l;
    cout<<"\nEnter breadth : ";
    cin>>b;
    cout<<"\nArea of rectangle is "<<rect(l,b);
    getch();
    return 0;
}
