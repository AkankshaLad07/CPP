#include<iostream>
#include<conio.h>
using namespace std;
void Value(int);

int main()
{
    int No=10;

    cout<<No;

    Value(No);

    cout<<endl<<No;
    getch();
    return 0;
}
void Value(int Num)
{
    cout<<"\nInside function...";
    Num++;
}
