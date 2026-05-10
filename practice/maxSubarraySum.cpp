#include<iostream>
using namespace std;
int maxSubarraySum(int arr[],int n){
    int maxSoFar=arr[0];
    int currentSum=0;

    for(int i=0; i<n; i++){
        currentSum=currentSum+arr[i];
        if(currentSum>maxSoFar){
            maxSoFar=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }
return maxSoFar;
}
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"max subarray sum: "<<  maxSubarraySum(arr, n);
     

     return 0;
}