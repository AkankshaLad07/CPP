#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char Alp='\0';

    cout<<"\nEnter any character : ";
    cin>>Alp;

        if((Alp>='A'&&Alp<='Z')||(Alp>='a'&&Alp<='z'))
        {
                cout<<"\nGiven character is Alphabet.";
        }
        else if(Alp >= '0' && Alp <= '9')
        {
                cout<<"\nGiven character is Digit.";
        }
        else
        {
                cout<<"\nGiven character is special symbol.";
        }
    getch();
    return 0;
}

