#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                
                swap(arr[j] , arr[j + 1]);
                
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[]={2,3,4,1,5};
    cout<<"Sorted array : "<<endl;
     bubbleSort(arr,n);
     printArray(arr,n);
    cout<<endl;
    
    cout<<"The largest element is: "<<arr[4]<<endl;
     cout<<"The second largest element is: "<<arr[3]<<endl;
     cout<<"The third largest element is: "<<arr[2]<<endl;
    return 0;

}