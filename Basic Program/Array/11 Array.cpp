///Create Array ,accept&display element using loop-with macro.
///Find maximum & minimum element in that array.


    #include<iostream>
    #include<conio.h>
    #include<stdlib.h>
    using namespace std;
    #define size 5

    int main()
    {
        int i=0, Max=0, Min=0 , Arr[size];

            for(i=0 ; i<size ; i++)
            {
                  cout<<"\nEnter element "<<i+1<<" =>";
                  cin>>Arr[i];
            }

        getch();
        system("cls");
       
            for(i=0 ; i<size ; i++)
                {
                       if(Arr[i]>Max || i==0)
                       {
                            Max=Arr[i];
                       }

                       if(Arr[i]<Min || i==0)
                       {
                            Min=Arr[i];
                       }
                }

             cout<<"\nMaximum number in given array is : "<<Max;

             cout<<"\nMinimum number in given array is : "<<Min<<endl;

        getch();
        return 0;
    }