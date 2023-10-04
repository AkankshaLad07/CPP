#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1=0 , No2=0 , Mod=0 ;

    cout<<"\nEnter 1st number : ";
    cin>>No1;
    cout<<"\nEnter 2nd number : ";
    cin>>No2;

    Mod = No1%No2;

    cout<<"\n\nRemainder of "<<No1<<" and "<<No2<<" is "<<Mod;
    getch();
    return 0;
}
