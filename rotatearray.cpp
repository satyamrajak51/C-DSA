#include<iostream>
using namespace std;

void rotate(int arr[],int n,int k)
{
        int temp[n];
        for(int i=0;i<n;i++)
        {
            temp[(i+k)%n]=arr[i];
        }
    cout<<"After rotating : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}



int main()
{
    int arr[20],n,k;
    
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"How many times to rotate : "<<endl;
    cin>>k;

    rotate(arr,n,k);
}

    
    
   
  
       
   
    
