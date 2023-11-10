///Program to accept array element and display using for loop .

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i=0, cSrc[5]={};

    for(i=0 ; i<5 ; i++)
    {
        cout<<"\nEnter Bill "<<i+1<<" :";
        cin>>cSrc[i];
    }
    system("cls");

    for(i=0 ; i<5 ; i++)
    {
        cout<<"\n Bill "<<i+1<<" :"<<cSrc[i];
    }
    getch();
    return 0;
}

