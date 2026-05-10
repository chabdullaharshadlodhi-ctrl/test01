#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30,40,50};
    int n=5;
    int pos=2;
    int value=99;
    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
    cout<<"Array after insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}