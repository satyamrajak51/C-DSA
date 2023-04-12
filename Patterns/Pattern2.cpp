#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number  : ";
    cin>>num;

    for(int i=0;i<num;i++)
    {
        for(int j=num;j>0;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }



}