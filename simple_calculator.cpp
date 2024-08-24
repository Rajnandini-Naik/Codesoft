#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1,n2;
    char op;
    cout<<"Enter: ";
    // cout<<"\nEnter first number: ";
    cin>>n1;
    // cout<<"Enter operation: ";
    cin>>op;
    // cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Answer = ";
    if(op=='+')
        cout<<n1+n2;
    else if(op=='-')
        cout<<n1-n2;
    else if(op=='*')
        cout<<n1*n2;
    else if(op=='/')
        cout<<n1/n2;
    else
        cout<<"Operation is not valid";
    cout<<endl<<endl;

    return 0;
}