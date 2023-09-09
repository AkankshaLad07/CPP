///Program to swap first and last digit of entered number. 

 #include <iostream>
 using namespace std; 
 #include<math.h>
  int main() 
  {
    int num=0 , lastdig=0, firstdig=0, dig=0;
    float swapnum=0;
    cout<<"\nEnter any positive number :";
    cin>>num;
    
    lastdig= num%10;
    dig=log10(num);
    firstdig=(num/(pow(10,dig)));
    
    swapnum=lastdig;
    swapnum=swapnum*(pow(10,dig));
    swapnum=swapnum+(num%(int)(pow(10,dig)));
    swapnum=swapnum-lastdig;
    swapnum=swapnum+firstdig;
    
    cout<<"\nOriginal number : "<<num;
    cout<<"\nAfter swapping first and last digit of "<<num<<" is : "<<swapnum;
    getch();
  }