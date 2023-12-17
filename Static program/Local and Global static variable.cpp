//Local static and global static variable

#include<iostream>
#include<conio.h>
using namespace std;

void fun()
{
  int i=10;
  static int j=10;
  
  cout<<i<<"\t\t"<<j<<endl;
  
  
  i++;
  j++;
}

int main()
{ 
  cout<<"i\t\t\t\tj"<<endl;             
                
                 //  i    j
   fun();        //  10  10
   fun();        //  10  11       
   fun();        //  10  12
   fun();        //  10  13
   return 0;
}