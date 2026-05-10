#include<iostream>
using namespace std;
int findMajElement(int arr[], int n){
    int candidate=arr[0];
    int count=0;
    for(int i=0; i<n; i++){
    if(count==0){
        candidate=arr[i];
        count=1;
    }
   
        else if(candidate==arr[i]){
            arr[i]=candidate;
            count++;
        } else {
            count--;
        }
    }        
        int actualVotes=0;
        for(int i=0; i<n; i++){
            if(arr[i]==candidate){
                actualVotes++;
            }
        }
        if(actualVotes>n/2){
            return candidate;
        } else {
            return -1;
        }
    }
    int main(){
        int arr[]={1,1,2,1,3,5,1};
        int n=sizeof(arr)/sizeof(arr[0]);
        int result =  findMajElement(arr,n);
        if(result!=-1){
            cout<<"the result is: "<<result;

        } else {
            cout<< " no majority element";
        }
        return 0;
    }
