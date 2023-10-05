#include<iostream>
#include<conio.h>
using namespace std;

class Substraction
{
        private :
                int No1 = 0 , No2 = 0 , Sub = 0;
        public :
                void accept();
                void display();
};
void  Substraction::accept()
{
    cout<<"\nEnter 1st Number : ";
    cin>>No1;
    cout<<"\nEnter 2nd Number : ";
    cin>>No2;
}
void  Substraction::display()
{
    Sub = No1-No2;
    cout<<"\n\nAddition of "<<No1<<" and "<<No2<<" is "<<Sub;
}
int main()
{
    Substraction s;
    s.accept();
    s.display();
    getch();
    return 0;

}
