///Program to accept ,display array element using for loop.
///Search given element in array and return its location.

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define size 5
using namespace std;

int main()
{
    int i=0 , Srh=0 , cSrc[size]={};

    for(i=0 ; i<5 ; i++)
    {
        cout<<"\nEnter Bill "<<i+1<<" :";
        cin>>cSrc[i];
    }
    system("cls");

    cout<<"\nEnter element for search : ";
    cin>>Srh;

    for(i=0 ; i<size ; i++)
    {
        if(Srh==cSrc[i])
        {
            break;
        }
    }
    if(i==size)
    {
        cout<<"\nEntered Element Is Not Available In Given Array.";

    }
    else
    {
        cout<<"\nEntered Element Is  Available In Given Array At "<<i+1<<" Location.";
    }
    getch();
    return 0;
}

