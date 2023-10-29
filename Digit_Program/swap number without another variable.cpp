//Program to swap two number without using another variable. 

#include<iostream>  
#include<conio.h>
using namespace std;  
int main()  
{  
    int a=5, b=10;      
    cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
    a=a+b;    
    b=a-b;     
    a=a-b;    
    cout<<"After swap a= "<<a<<" b= "<<b<<endl;    
    getch();  
    return 0;  
}  