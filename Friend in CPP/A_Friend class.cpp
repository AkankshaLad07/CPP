#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Details
{
    private:
          int RNo, s1, s2, s3;
          char name[20], stream[10];
    public:
      void getdetails()
      {
          cout<<"\nEnter Roll No : ";
          cin>>RNo;
          cout<<"\nEnter Name : ";
          gets(name); 
          cout<<"\nEnter Stream : ";
          gets(stream);
          cout<<"\nEnter 3 subjects mark : ";
          cin>>s1>>s2>>s3;
      }
      void show()
      {
          cout<<"\nRoll No.: "<<RNo;
          cout<<"\nName    : "<<name;
          cout<<"\nStream  : "<<stream;
          cout<<"\nMarks   : "<<s1<<"\t"<<s2<<"\t"<<s3;
      }
      friend class Result;
};
class Result
{
    private:
          int total;
          float per;
    public:
          int gettotal(Details s)
          {
            total= s.s1+s.s2+s.s3;
            return (total);
          }
          float getresult()
          {
            per=(float)total/3;
            return(per);
          }
};
int main() 
{
  Details P;
  Result K;
  P. getdetails();
  cout<<"\n----------------------";
  P. show();
  cout<<"\n------- Result --------";
  cout<<"\nTotal      : "<<K.gettotal(P);
  cout<<"\nPercentage : "<<K.getresult();
  getch() ;
  return 0;
}