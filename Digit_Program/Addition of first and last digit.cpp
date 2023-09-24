//Program to add first and last digit of entered number. 

 #include <iostream> 
 #include<math.h>
 using namespace std; 
  int main() 
  {
    int num=0, lastdig=0, firstdig=0, dig=0, sum=0;
    
    cout<<"\nEnter any positive number :";
    cin>>num;
    
    lastdig= num%10;
    dig=log10(num);
    firstdig=(num/(pow(10,dig)));
    
    sum=firstdig+lastdig;
    
    cout<<"\nOriginal number : "<<num;
    cout<<"\nAddition of first and last digit of "<<num<<" is : "<<sum;
    getch();
  }