///Program for print N character pattern.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r=0, c=0, s=0;

    cout<<"\nEnter size for pattern :";
    cin>>s;
    cout<<endl;

    for(r=1 ; r<=s ; r++)
    {
        for(c=1 ; c<=s ; c++)
        {
            if(c==1||c==s||r==c)
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
