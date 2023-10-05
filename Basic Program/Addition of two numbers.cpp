#include<iostream>
#include<conio.h>
using namespace std;

class Addition
{
        private :
                int No1 = 0 , No2 = 0 , Add = 0;
        public :
                void accept();
                void display();
};
void  Addition::accept()
{
    cout<<"\nEnter 1st Number : ";
    cin>>No1;
    cout<<"\nEnter 2nd Number : ";
    cin>>No2;
}
void  Addition::display()
{
    Add = No1+No2;
    cout<<"\n\nAddition of "<<No1<<" and "<<No2<<" is "<<Add;
}
int main()
{
    Addition s;
    s.accept();
    s.display();
    getch();
    return 0;

}
