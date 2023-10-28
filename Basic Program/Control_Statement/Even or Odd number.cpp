//Program to find given number is even or odd. 

#include<iostream>
#include<conio.h>
using namespace std;

int main() 
{
    int a=0 ;
    cout<<"\nEnter any number :";
    cin>>a;
    if(a%2 == 0)  
    {
      cout<<"\ngiven number is even. ";
    }
    else 
    {
      cout<<"\ngiven number is odd. ";
    }       
    getch();
    return 0;
}