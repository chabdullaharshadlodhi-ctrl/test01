#include <iostream>
using namespace std;


void printSum(int arr[][3], int rowSize) {
    int sum = 0;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < 3; j++) {
            sum =sum + arr[i][j];
        }
    }
    cout << "\nThe sum of all elements in the matrix is: " << sum << endl;
}

int main() {
    int rows;

    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;

    int matrix[rows][3];
    cout << "Enter the elements for a " << rows << "x3 matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    printSum(matrix, rows);

    return 0;
}