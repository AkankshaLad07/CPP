///Program to print array element using cin .


#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int cSrc[5]={};

    cout<<"\nEnter Bill 1 :";
    cin>>cSrc[0];

    cout<<"\nEnter Bill 2 :";
    cin>>cSrc[1];

    cout<<"\nEnter Bill 3 :";
    cin>>cSrc[2];

    cout<<"\nEnter Bill 4 :";
    cin>>cSrc[3];

    cout<<"\nEnter Bill 5 :";
    cin>>cSrc[4];

    system("cls");
    cout<<"\n Bill 1 :"<<cSrc[0];
    cout<<"\n Bill 2 :"<<cSrc[1];
    cout<<"\n Bill 3 :"<<cSrc[2];
    cout<<"\n Bill 4 :"<<cSrc[3];
    cout<<"\n Bill 5 :"<<cSrc[4]<<endl;
    getch();
    return 0;
}
