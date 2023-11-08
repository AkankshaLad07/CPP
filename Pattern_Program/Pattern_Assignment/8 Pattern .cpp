///Program for print table of 15 using Left lower pattern.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=0, i=0, s=0, N=0;


    cout<<"\nEnter size for pattern :";
    cin>>s;
    cout<<"\n==========Pattern==========\n";

    for(i=1 ,N=15; i<=s ; i++)
    {
        for(j=1 ; j<=s ; j++)
        {
            if(i==j||i>=j)
            {
                cout<<" "<<N<<" ";
                N+=15;
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n===========================";

    getch();
    return 0;
}
