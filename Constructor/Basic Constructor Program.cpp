#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class calculator
{
    public:
            int no1,no2,res;

            calculator();
            calculator(int num1,int num2);
            void add();
            void sub();
            ~calculator();
};
calculator::calculator()
{
    cout<<"\nInside default constructor !!!\n";
    no1=no2=res=0;
}
calculator::calculator(int num1,int num2)
{
    cout<<"\n\nInside parameterised constructor !!!\n";
    no1=num1; no2=num2; res=0;
}
void calculator::add()
{
    res=no1+no2;
}
void calculator::sub()
{
    res=no1-no2;
}
calculator::~calculator()
{
    cout<<"\nInside destructor of our calculator class"<<res;
    no1=no2=res=0;
}
int main()
{
    calculator obj1;
    cout<<"\nEnter 1st number :";
    cin>>obj1.no1;
    cout<<"\nEnter 2nd number :";
    cin>>obj1.no2;
    obj1.add();
    cout<<"\nAddition of "<<obj1.no1<<" and "<<obj1.no2<<" is "<<obj1.res;
    obj1.sub();
    cout<<"\nSubstraction of "<<obj1.no1<<" and "<<obj1.no2<<" is "<<obj1.res;

    calculator obj2(100,55);
    obj2.add();
    cout<<"\nAddition of "<<obj2.no1<<" and "<<obj2.no2<<" is "<<obj2.res;

    obj2.sub();
    cout<<"\nSubstraction of "<<obj2.no1<<" and "<<obj2.no2<<" is "<<obj2.res<<endl;

    getch();
    return 0;
}
