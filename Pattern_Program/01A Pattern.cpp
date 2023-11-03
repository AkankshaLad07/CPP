#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int size=0, i=0, r=0, c=0;

    cout<<"\nEnter size for pattern :";
    cin>>size;
    cout<<endl;
    for(r=1;r<=size;r++)
    {
        for(c=1;c<=size;c++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
    getch();
    return 0;
}
