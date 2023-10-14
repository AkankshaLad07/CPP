//Program using inline function with default argument.

#include<iostream>
#include<conio.h>
using namespace std;

inline int rect(int x,int y)
{
   return ( x * y );
}
int main()
{
    cout<<"\nArea of rectangle is "<<rect(8,4);
    getch();
    return 0;
}
