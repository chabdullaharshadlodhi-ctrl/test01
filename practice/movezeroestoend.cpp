#include<iostream>
using namespace std;
void pushZerosToEnd(int arr[], int n) {
    int j = 0; // Count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i]; // Move non-zero element to the front
            j++; // Increment count of non-zero elements
        }
    }
    // Fill remaining elements with zeros
    for (int i = j; i < n; i++) {  //starting this loop from j and printing 0 in the next boxes
        arr[i] = 0;
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pushZerosToEnd(arr, n);

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}