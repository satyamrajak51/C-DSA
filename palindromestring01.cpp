#include<iostream>
using namespace std;

     int  palindrome(char name[], int length){
            int start=0;
            int end=length-1;
            while(start<=end){
                if(name[start]!=name[end]){
                        return 0;
                }
                else
                {
                    start++;
                    end--;
                }
            }
            return 1;
        }


int main(){
        char name[20];
        int length=0;
        cout<<"Enter your name : "<<endl;
        cin>>name;
        for(int i=0;name[i]!='\0';i++)
        {
            length++;
        }
       
        if(palindrome(name,length))
        {
            cout<<"PALINDROME";
        }
        else
        {
              cout<<"NOT PALINDROME";
        }
}
        
       
