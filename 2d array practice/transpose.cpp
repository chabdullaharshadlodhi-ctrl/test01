#include <iostream>
using namespace std;

void inputMatrix(int arr[][100], int n) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
}

void transpose(int arr[][100], int result[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            result[j][i] = arr[i][j];    // element at (i,j) goes to (j,i)
        }
    }
}

void printMatrix(int arr[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j];
            if(j < n-1) cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    int arr[100][100];
    int result[100][100];    // second array for transposed matrix
    int n;

    cin >> n;
    inputMatrix(arr, n);

    cout << "Before:\n";
    printMatrix(arr, n);

    transpose(arr, result, n);

    cout << "After:\n";
    printMatrix(result, n);  // print result, not arr

    return 0;
}