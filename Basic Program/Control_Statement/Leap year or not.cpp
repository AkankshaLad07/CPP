///Program to check given year is leap year or not.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year=0 ;

    cout<<"\nEnter a year : ";
    cin>>year;

    if( year % 4 == 0)
    {
        cout<<endl<<year<<" is leap year.";
    }
    else
    {
        cout<<endl<<year<<" is not leap year.";
    }
    getch();
    return 0;
}
