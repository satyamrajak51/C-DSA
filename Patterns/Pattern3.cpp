#include<iostream>
using namespace std;

int main()
{
     int num;
     cout<<"Enter Number : ";
     cin>>num;
     int count = 1;
     
     for(int i=1;i<=num;i++)
     {
       
        for(int i=1;i<=num;i++)
        {
            cout<<count<<" " ;
            count++;
        }
        cout<<"\n";
        
     }   
}