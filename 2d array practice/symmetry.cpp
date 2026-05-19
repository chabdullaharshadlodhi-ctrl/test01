//a symmetry matrix is a square matrix that is equal to its transpose. In other words, a matrix A is symmetric if A[i][j] == A[j][i] for all i and j. To check if a matrix is symmetric, we can compare each element with its corresponding element in the transpose of the matrix. If all elements are equal, then the matrix is symmetric; otherwise, it is not.
#include<iostream>
using namespace std;

bool isSymmetric(int arr[][100], int n) {
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(arr[i][j] != arr[j][i]){
            return false;
        }
    }
}
return true;
}
int main(){
    int arr[100][100], n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;

    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    if(isSymmetric(arr, n)){
        cout<<"The matrix is symmetric."<<endl;
    } else {
        cout<<"The matrix is not symmetric."<<endl;
    }

    return 0;
}