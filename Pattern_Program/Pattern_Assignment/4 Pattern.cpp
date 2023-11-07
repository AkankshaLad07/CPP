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
    cout<<endl;
    alp='A';
    for(i=1 ; i<=s ; i++)
    {
        for(j=1 ; j<=s ; j++,alp+=3)
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
    getch();
    return 0;
}
