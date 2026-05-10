#include<iostream>
using namespace std;

//going to write the code of selection sort in c++ language here as well

void bubbleSorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // To optimize the sorting process
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; // Set to true if a swap occurred
            }
        }
        if(!swapped) { // If no swaps occurred, the array is already sorted
            break;
        }
    }
}

void selectionSorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int n=5;
    int arr[] = {64, 34, 25, 12, 22};
    cout << "Original array: ";
    printArray(arr, n);
    selectionSorting(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;

}


