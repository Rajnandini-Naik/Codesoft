
#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int n=rand()%100;
    int a=-1;
    cout<<endl<<"Guess a number between 0 to 99."<<endl;
    while(a!=n)
    {
        cout<<endl<<"Guess the number: ";
        cin>>a;
        if(a==n)
        {
            cout<<"\nYou guess the right number.\n"<<endl;
            break;
        }
        if(a<n)
        {
            cout<<"The number you guessed is too low."<<endl;
        }
        else
        {
            cout<<"The number you guessed is too high."<<endl;
        }
    }

    return 0;
}