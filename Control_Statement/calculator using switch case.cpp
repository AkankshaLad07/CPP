///calculator using switch

#include<iostream>
using namespace std;
int main()
{
  int Opt=0;
  float no1, no2, result;
  cout<<"\n1.Addition \n2.Substraction\n3.Multiplication\n4.Division\n5.Quotient";
  cout<<"\n\nEnter option for corresponding operation:";
  cin>>Opt;
  
  switch(Opt)
  {
   case 1:
         cout<<"\n\tAddition\n";
         cout<<"Enter two numbers :";
         cin>>no1>>no2;
         result=no1+no2;
         cout<<no1<<" + "<<no2<<" = "<<result;
         break;
    case 2:
         cout<<"\n\tSubstraction\n";
         cout<<"Enter two numbers :";
         cin>>no1>>no2;
         result=no1-no2;
         cout<<no1<<" - "<<no2<<" = "<<result;
         break;
     case 3:
         cout<<"\n\tMultiplication\n";
         cout<<"Enter two numbers :";
         cin>>no1>>no2;
         result=no1*no2;
         cout<<no1<<" * "<<no2<<" = "<<result;
         break;
     case 4:
         cout<<"\n\tDivision\n";
         cout<<"Enter two numbers :";
         cin>>no1>>no2;
         result=no1/no2;
         cout<<no1<<" / "<<no2<<" = "<<result;
         break;
  
     default:
         cout<<"\n\tExit";
         break;  
  }
  getch();
  return 0;
}