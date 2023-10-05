#include<iostream>
#include<conio.h>
using namespace std;

class Modulo
{
        private :
                int No1 = 0 , No2 = 0 , Mod = 0;
        public :
                void accept();
                void display();
};
void  Modulo::accept()
{
    cout<<"\nEnter 1st Number : ";
    cin>>No1;
    cout<<"\nEnter 2nd Number : ";
    cin>>No2;
}
void  Modulo::display()
{
    Mod = No1%No2;
    cout<<"\n\nMultiplication of "<<No1<<" and "<<No2<<" is "<<Mod;
}
int main()
{
    Modulo s;
    s.accept();
    s.display();
    getch();
    return 0;
}
