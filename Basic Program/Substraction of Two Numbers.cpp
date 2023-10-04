#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1=0 , No2=0 , Sub=0 ;

    cout<<"\nEnter 1st number : ";
    cin>>No1;
    cout<<"\nEnter 2nd number : ";
    cin>>No2;

    Sub = No1-No2;

    cout<<"\n\nSubstraction of "<<No1<<" and "<<No2<<" is "<<Sub;
    getch();
    return 0;
}
