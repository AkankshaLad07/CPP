///Program using constructor overloading.

#include<iostream>
#include<conio.h>
using namespace std;

class rect
{
    private :
        int l,b,area;
    public:
        rect()
        {
            l=0;
            b=0;
            area=0;

        }
        rect(int x)
        {
            l=x;
            b=5;
        }
        rect(int x,int y)
        {
            l=x;
            b=y;
        }
        void getarea()
        {
            area=l*b;
            cout<<"\n\nArea of rectangle : "<<area;
        }
};
int main()
{
    rect s1;
    rect s2(9);
    rect s3(8,3);
    s1.getarea();
    s2.getarea();
    s3.getarea();
    getch();
    return 0;
}

