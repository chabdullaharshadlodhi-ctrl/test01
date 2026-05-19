#include<iostream>
using namespace std;
void inputMatrix(int arr[][100], int m, int n){
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
}
void multiplyMatrices(int arr1[][100], int arr2[][100], int result[][100], int m, int n, int p){
    for (int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            result[i][j] = 0;
            for(int k=0; k<n; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}
void printMatrix(int arr[][100], int m, int n){
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr1[100][100], arr2[100][100], result[100][100];
    int m, n, p;
    cout<<"Enter the number of rows and columns for first matrix: ";
    cin>>m>>n;
    cout<<"Enter the number of columns for second matrix: ";
    cin>>p;

    cout<<"Enter the elements of first matrix: "<<endl;
    inputMatrix(arr1, m, n);
    cout<<"Enter the elements of second matrix: "<<endl;
    inputMatrix(arr2, n, p);

    multiplyMatrices(arr1, arr2, result, m, n, p);

    cout<<"Result of multiplication: "<<endl;
    printMatrix(result, m, p);

    return 0;
}