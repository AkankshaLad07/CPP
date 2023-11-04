///Program for print Z character in reverse pattern.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=0, i=0, s=0;

    cout<<"\nEnter size for pattern :";
    cin>>s;
    cout<<endl;

    for(i=1 ; i<=s ; i++)
    {
        for(j=1 ; j<=s ; j++)
        {
            if(i==1||i==s||i==j)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
    getch();
    return 0;
}
