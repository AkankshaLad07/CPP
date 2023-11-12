#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
   int i=0,no=0,s=0, e=0;
  
   cout<<"\nTable starts from:";
   cin>>s;
   cout<<"\nTable upto:";
   cin>>e;
   cout<<"=================================\n"; 
   if(s<e)
   {
       for(no=1;no<=10;no++) 
        {
            for(i=s;i<=e;i++)
            {
                cout<<" "<<no*i<<" ";     
            } 
          cout<<"\n";
        }
   }
    else
    {
        for(no=1;no<=10;no++) 
        {
            for(i=s;i>=e;i--)
            {
                cout<<no*i;     
            } 
          cout<<"\n";
        }
    }
  cout<<"==============================\n";
  getch();
  return 0;
 }