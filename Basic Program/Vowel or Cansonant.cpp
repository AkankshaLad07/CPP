#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char Alp='\0';
    up:
    system("cls");
    cout<<"\nEnter any character : ";
    cin>>Alp;

    if(Alp=='A'||Alp=='a'||Alp=='E'||Alp=='e'||Alp=='I'||Alp=='i'||Alp=='U'||Alp=='u')
    {
            cout<<"\nGiven character is Vowel.";
    }
    else if((Alp>='A'&&Alp<='Z')||(Alp>='a'&&Alp<='z'))
    {
            cout<<"\nGiven character is Consonant.";
    }
    else
    {
            cout<<"\nInvalid Input.";
            goto up;
    }
    getch();
    return 0;
}

