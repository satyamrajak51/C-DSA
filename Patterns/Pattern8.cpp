#include<iostream>
using namespace std;
int main()
{
    

    int arr[3][3];
    int sum1=0;
    int sum2=0;

    cout<<"Enter array : ";
     for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>arr[i][j];
        }
       
    }

    cout<<"Your Array is : "<<endl;

     for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
           if(i==j)
            {
               sum1=sum1+arr[i][j];
              
            }
           
           if(i+j==4)
            {
               sum2=sum2+arr[i][j];
                 
            }
            
        }
        cout<<"Sum1 = "<<sum1<<endl;
         cout<<"Sum2 = "<<sum2<<endl;
        
    }

         

    
}
    
    
    
           
           