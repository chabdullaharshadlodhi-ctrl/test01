#include<iostream>
using namespace std;
void plusOne(int arr[], int n){
    int carry =1;
    for(int i=n-1; i>=0; i--){
        int sum= arr[i] + carry;
        arr[i] = sum %10; //this ensures the digit is 0 to 9 and if it is 10 it prints 0 
        carry = sum /10; // if it is 10 to 19 carry stores one if it is 0 to 9 it becomes 0
    }
    if (carry==1){
        cout<<"1";
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]; 
    }
    cout<<endl;

}
int main(){
    int arr1[]={1,2,3};
    int n1=sizeof(arr1) / sizeof(arr1[0]);
    plusOne(arr1,n1);

     int arr2[]={9,9,9};
    int n2=sizeof(arr2) / sizeof(arr2[0]);
    plusOne(arr2,n2);
return 0;

}
