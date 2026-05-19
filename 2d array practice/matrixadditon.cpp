#include <iostream>
using namespace std;

void inputMatrix(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
}

void addMatrices(int arr1[][100], int arr2[][100], int result[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];  // add matching cells
        }
    }
}

void printMatrix(int arr[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
            if (j < n-1) cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    int arr1[100][100];
    int arr2[100][100];
    int result[100][100];              // third matrix stores answer
    int m, n;
    cout << "Enter the number of rows and columns: ";

    cin >> m >> n;

    cout << "Enter first matrix:\n";
    inputMatrix(arr1, m, n);

    cout << "Enter second matrix:\n";
    inputMatrix(arr2, m, n);

    addMatrices(arr1, arr2, result, m, n);

    printMatrix(result, m, n);

    return 0;
}