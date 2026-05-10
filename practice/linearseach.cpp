#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={5,6,7,8,9}; 
    int size=5;
    int target=7;
    int result=linearSearch(arr,size,target);
cout<<"element found at index: "<<result<<endl;
return 0;
}