#include<iostream>
#include<vector>
using namespace std;

int secLargest(vector<int> v){

        int max=INT_MIN;
        int maxindex;
        for(int i=0;i<v.size();i++){

                if(v[i]>max){
                        max=v[i];
                        maxindex=i;
                }
        }
                return maxindex;
}

int main(){

        vector<int> v = {2,3,5,7,6,1,7};
        int index1 = secLargest(v);
        cout<<"Largest Element : "<<v[index1]<<endl;
        
        int largest = v[index1];    

        for(int i=0;i<v.size();i++){

                if(v[i]==largest)
                v[i]=-1;
        }
        
        int index2 = secLargest(v);
        cout<<"Second Largest Element : "<<v[index2];
}