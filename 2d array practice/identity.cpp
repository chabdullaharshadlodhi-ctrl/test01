#include<iostream>
using namespace std;
bool isIdentity(int arr[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && arr[i][j] != 1) {
                return false;
            }
            if(i != j && arr[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int arr[100][100];
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    if(isIdentity(arr, n)) {
        cout << "The matrix is an identity matrix." << endl;
    } else {
        cout << "The matrix is not an identity matrix." << endl;
    }

    return 0;
}