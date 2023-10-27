//Program for swapping of two number using another variable. 

#include<iostream>
#include<conio.h>
using namespace std;

int main() 
{
    int a = 10,b = 20;
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
    getch();
    return 0;
}
