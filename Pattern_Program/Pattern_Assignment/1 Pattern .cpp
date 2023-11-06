///Program to print left lower pattern using Alphabets.

    #include<iostream>
    #include<conio.h>
    using namespace std;
    int main()
    {
        int R=0, C=0, X=0;
        char i='\0';


        cout<<"Enter size for pattern : ";
        cin>>X;

        cout<<"\n==========Pattern==========\n\n";

        for(R=1, i='A'; R<=X; R++)
        {
            for(C=1; C<=X; C++)
            {
                if(R>=C)
                {
                    cout<<" "<<i<<" ";
                    i++;
                }
            }
            cout<<"\n";
        }
        cout<<"\n==========Thanks==========";

        getch();
        return 0;
    }
