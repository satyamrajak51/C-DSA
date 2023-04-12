#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number  : ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            cout<<j;
             
        }
        cout<<"\n";
    }

    return 0;
}

