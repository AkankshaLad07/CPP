#include<iostream>
#include<conio.h>
using namespace std;

class Multiplication
{
        private :
                int No1 = 0 , No2 = 0 , Mul = 0;
        public :
                void accept();
                void display();
};
void  Multiplication::accept()
{
    cout<<"\nEnter 1st Number : ";
    cin>>No1;
    cout<<"\nEnter 2nd Number : ";
    cin>>No2;
}
void  Multiplication::display()
{
    Mul = No1*No2;
    cout<<"\n\nMultiplication of "<<No1<<" and "<<No2<<" is "<<Mul;
}
int main()
{
    Multiplication s;
    s.accept();
    s.display();
    getch();
    return 0;
}
