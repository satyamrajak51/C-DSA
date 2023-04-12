#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;
     int j=1;
     char ch = 'A';

    for(int i=1;i<=num;i++)
    {
      
        for(int j=1;j<=num;j++){
            
                cout<<ch<<" ";
                
        }
        ch++;
        cout<<"\n";
    }
}
            
            
