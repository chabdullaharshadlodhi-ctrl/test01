#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];" ";
    }
    cout<<"original array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed array: ";
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}