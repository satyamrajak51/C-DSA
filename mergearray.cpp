#include<iostream>
#include<conio.h>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[],int s){

    int i=0;
    int j=0;
    int k=0;
    
    while(i<n && j<m){
        
        if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                k++;
                i++;
        }

        else{
                arr3[k]=arr2[j];
                k++;
                j++;

        }
    }

    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }

    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

    void print(int ans[],int n ){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }




int main()
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8};
    int arr3[9];
    merge(arr1,5,arr2,4,arr3,9);
    print(arr3,9);

    return 0;
}