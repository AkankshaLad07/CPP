#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1=0 , No2=0 , Mul=0 ;

    cout<<"\nEnter 1st number : ";
    cin>>No1;
    cout<<"\nEnter 2nd number : ";
    cin>>No2;

    Mul = No1*No2;

    cout<<"\n\nMultiplication of "<<No1<<" and "<<No2<<" is "<<Mul;
    getch();
    return 0;
}
