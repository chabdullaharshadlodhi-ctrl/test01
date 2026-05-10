#include<iostream>
using namespace std;
void reverseInGroups(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        int start = i;
        int end = min(i + k - 1, n - 1); // Ensure we don't go out of bounds
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the group size (k): ";
    cin >> k;

    reverseInGroups(arr, n, k);

    cout << "Array after reversing in groups of " << k << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}