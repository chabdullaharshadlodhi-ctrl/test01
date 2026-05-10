#include <iostream>
#include <algorithm> // for swap
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int findSecondLargest(int arr[], int n) {
    if (n < 2) return -1;

    // After sorting, the largest is at the last index
    int largest = arr[n - 1];
    
    // Traverse backwards to find the first element distinct from 'largest'
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            return arr[i]; // This is the second largest distinct element
        }
    }

    return -1; // If all elements were the same
}
int findThirdLargest(int arr[], int n) {
    if(n<3) return -1;
    int largest = arr[n-1];
    int secondLargest = arr[n-2];
    for(int i= n-3; i>=0; i--){
        if(arr[i] != largest && arr[i] != secondLargest){
            return arr[i];
        }
     
    }
    return -1;  
}
int main() {
    int n = 5;
    int arr[] = {2, 5, 5, 1, 5}; // Example with duplicates

    bubbleSort(arr, n);

        cout << "Sorted array: ";
        printArray(arr, n);
        cout << endl;

    int secondLargest = findSecondLargest(arr, n);
    
    if (secondLargest == -1) {
        cout << "The second largest element does not exist (-1)" << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    int thirdLargest = findThirdLargest(arr, n);
    if(thirdLargest == -1){
        cout<<"The third largest element does not exist (-1)"<<endl;
    } else {
        cout<<"The third largest element is: "<<thirdLargest<<endl;
    }
    return 0;
}