#include<iostream>
#include<conio.h>
using namespace std;

class Division
{
        private :
                int No1 = 0 , No2 = 0 , Div = 0;
        public :
                void accept();
                void display();
};
void  Division::accept()
{
    cout<<"\nEnter 1st Number : ";
    cin>>No1;
    cout<<"\nEnter 2nd Number : ";
    cin>>No2;
}
void  Division::display()
{
    Div = No1/No2;
    cout<<"\n\nMultiplication of "<<No1<<" and "<<No2<<" is "<<Div;
}
int main()
{
    Division s;
    s.accept();
    s.display();
    getch();
    return 0;
}
