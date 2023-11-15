///Program to print maximum digit in inputted number.

#include<iostream>
#include<conio.h>
using namespace std;
int max(int);
int main()
{
    int No=0;

    cout<<"\nEnter a positive number = ";
    cin>>No;

    cout<<"\nMaximum digit in "<<No<<" is = "<<max(No);

    getch();
    return 0;
}
int max(int Num)
{
    int Dig=0, Temp=0, Max=0;

    Temp = Num;

    while(Temp>0)
    {
        Dig = Temp % 10;

        if(Max<Dig)
        {
            Max=Dig;
        }
        Temp = Temp / 10;
    }
    return Max;
}