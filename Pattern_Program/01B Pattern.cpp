#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=0, i=0, r=0, c=0;

    cout<<"\nEnter size for row :";
    cin>>r;
    cout<<"\nEnter size for column :";
    cin>>c;
    cout<<endl;

    for(i=1 ; i<=r ; i++)
    {
        for(j=1 ; j<=c ; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}
