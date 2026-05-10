#include <iostream>
using namespace std;

void productExceptSelf(int arr[], int n) {
    int left[n], right[n], output[n];

    // Step 1: left array
    left[0] = 1;
    for(int i = 1; i < n; i++) {
        left[i] = left[i-1] * arr[i-1];
    }

    // Step 2: right array
    right[n-1] = 1;
    for(int i = n-2; i >= 0; i--) {
        right[i] = right[i+1] * arr[i+1];
    }

    // Step 3: final output
    for(int i = 0; i < n; i++) {
        output[i] = left[i] * right[i];
    }

    // print result
    for(int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    productExceptSelf(arr, n);

    return 0;
}