#include<iostream>
using namespace std;

    int main()
    {
        int n,i,k1=0,k2=0;
        cout<<"Enter size of array = ";
        cin>>n;
        int arr[n],even[n],odd[n];
        cout<<"\nEnter elements of array = ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        
            if(arr[i]%2==0)
            even[k1++]=arr[i];
            else
            odd[k2++]=arr[i];
            
            
        }
        cout<<"\nEven elements["<<k1<<"] are = "<<endl;
        for(i=0;i<k1;i++)
        {
            cout<<even[i]<<" ";
        }
        cout<<"\nOdd elements["<<k2<<"] are = "<<endl;
        for(i=0;i<k2;i++)
        {
            cout<<odd[i]<<" ";
        }
        
    
        
        
        return 0;
    }