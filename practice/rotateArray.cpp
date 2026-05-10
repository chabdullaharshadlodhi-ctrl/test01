#include<iostream>
using namespace std;
void rotateArray(int arr[], int n, int d){
    d=d%n;
    for(int i=0; i<d; i++){
        int firstelement=arr[0];
        for(int j=0; j<n-1; j++){
            arr[j]=arr[j+1];
           
        }
         arr[n-1]=firstelement;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int d=2;
    int n=6;
      
    rotateArray(arr, n , d);
    cout<<"Rotated array : ";
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}