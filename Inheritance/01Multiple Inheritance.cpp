///Program using multiple inheritance

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Student
{
   protected:
            int RNo ;
            char Name[30];
   public:
        void setInfo()
        {
            cout<<"\nEnter Roll No.:";
            cin>>RNo;
            cout<<"\nEnter student name : ";
            fflush(stdin);
            gets(Name);
        }
        void showInfo()
        {
            cout<<"\nRoll No.          : "<<RNo;
            cout<<"\nName              : "<<Name;
        }
};
class Subject
{
    protected:
            int Math,Phy,Chem;
    public:
            void setSub()
            {
                cout<<"\nEnter Mathematics mark :";
                cin>>Math;
                cout<<"\nEnter Physics mark : ";
                cin>>Phy;
                cout<<"\nEnter Chemistry Mark : ";
                cin>>Chem;
            }
            void showSub()
            {
                     cout<<"\nMathematics mark  : "<<Math;
                     cout<<"\nPhysics mark      : "<<Phy;
                     cout<<"\nChemistry mark    : "<<Chem;
            }
};
class Result:public Student,public Subject
{
    private:
            float Total,Per;
    public:
            void setRes()
            {
                    Student:: setInfo();
                    Subject:: setSub();
                    Total=Math+Phy+Chem;
                    Per=Total/3;
            }
            void showRes()
            {
                    Student:: showInfo();
                    Subject:: showSub();
                    cout<<"\nTotal mark        : "<<Total;
                    cout<<"\nPercentage        : "<<Per<<"%";
            }
};

int main()
{
    Result h;
    h.setRes();
    system("cls");
    cout<<"\n---------------------------------";
    cout<<"\n\tStudent Result";
    cout<<"\n---------------------------------";
    h.showRes();
    getch();
    return 0;
}
