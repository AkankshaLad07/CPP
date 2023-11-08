///Program for print character using Left lower pattern.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=0, i=0, s=0;
    char alp='\0';

    cout<<"\nEnter size for pattern :";
    cin>>s;
    cout<<"\n==========Pattern==========\n";

    for(i=1 ; i<=s ; i++)
    {
        for(j=1 ,alp='A'; j<=s ; j++,alp++)
        {
            if(i==j||i>=j)
            {
                cout<<" "<<alp<<" ";
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
