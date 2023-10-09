#include<iostream>
#include<conio.h>
using namespace std;

class base
{
    public:
        int a,b;
        base()
        {
            cout<<"\nBase : Constructor....";
        }
        ~base()
        {
            cout<<"\nBase :Destructor....";
        }
        void function()
        {
            cout<<"\nBase : function().....";
        }
};
class derived
{
    public:
        int x,y;

        derived()
        {
            cout<<"\nDerived : Constructor.....";
        }
        ~derived()
        {
            cout<<"\nDerived : Destructor.....";
        }
        void Mfun()
        {
            cout<<"\nDerived : Function()..... ";
        }
};

int main()
{
    base l;
    getch();
    derived s;
    getch();

    cout<<endl<<sizeof(l);
    cout<<endl<<sizeof(s);

    getch();
    return 0;
}
