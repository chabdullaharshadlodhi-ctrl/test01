#include<iostream>
using namespace std;
int main(){
    int arr[]={12,32,34,56,-1};
    int n=5;
    int smallest=arr[0];
    int second_smallest=arr[1];
    int third_smallest=arr[2];
    if(n<3){
        cout<<"invalid array size"<<endl;
        return 0;
    }
    if(arr[0]<arr[1]&&arr[0]<arr[2]){
            smallest=arr[0];
            second_smallest=arr[1];
            third_smallest=arr[2];
        }
        else if(arr[1]<arr[0]&&arr[1]<arr[2]){
            smallest=arr[1];
            second_smallest=arr[0];
            third_smallest=arr[2];
        }
        else{
            smallest=arr[2];
            second_smallest=arr[0];
            third_smallest=arr[1];
        }
            
    for(int i=3;i<n;i++){
        if(arr[i]<smallest){
            third_smallest=second_smallest;
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second_smallest && arr[i]!=smallest){
            third_smallest=second_smallest;
            second_smallest=arr[i];
        }
        else if(arr[i]<third_smallest && arr[i]!=second_smallest && arr[i]!=smallest){
            third_smallest=arr[i];
        }
        
        
    }
    cout<<"Smallest element is "<<smallest<<endl;
    cout<<"Second smallest element is "<<second_smallest<<endl;
    cout<<"Third smallest element is "<<third_smallest<<endl;
    return 0;
}