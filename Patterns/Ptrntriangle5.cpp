#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;
    
    for(int i=1;i<=num;i++)
    {
        int val=i;
        for(int j=1;j<=i;j++)
        {
            cout<<val<<" ";
            val++;
        }
        cout<<"\n";
    }
}
            
            
