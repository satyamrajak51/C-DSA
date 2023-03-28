#include<iostream>
#include<vector>
using namespace std;

int targetsum(vector<int> v,int target){

        int count=0;
        for(int i=0;i<v.size();i++){
           
            for(int j=i+1;j<v.size();j++){
             
                if(v[i]+v[j]==target){
                    count++;
                }
            }
        
        }
        return count;
}

int main(){

      vector<int> v={3,4,6,6,1};
      int res = targetsum(v,7);
      cout<<res;  
}