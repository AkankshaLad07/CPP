///Program to accept ,display array element using for loop.
///Find maximum element in array.

#include<iostream>
#include<conio.h>
#define size 5
using namespace std;

int main()
{
    int i=0 , Min=0 , cSrc[size]={};

    for(i=0 ; i<size ; i++)
    {
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>cSrc[i];
    }

    for(i=0 ; i<size ; i++)
    {
        if(Min>cSrc[i] || i==0 )
        {
            Min=cSrc[i];
        }
    }
    cout<<"\nMinimum Element In Given Array Is "<<Min;
    getch();
    return 0;
}
