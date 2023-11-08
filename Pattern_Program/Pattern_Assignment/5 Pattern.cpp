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
    cout<<"\n==========Pattern==========\n\n";

    for(i=1 ,alp='A'; i<=s ; i++)
    {
        for(j=1 ; j<=s ; j++)
        {
            if(i==j||i>=j)
            {
                cout<<" "<<alp<<" ";
                alp+=3;
                 if(alp>'Z')
                           {
                               alp='A'+(alp-'Z')-1;
                           }
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
