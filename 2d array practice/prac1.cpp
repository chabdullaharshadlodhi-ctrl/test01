#include<iostream>
using namespace std;
void inputArray(int arr[][100], int m, int n){
    for (int i=0; i<m; i++){
for(int j=0; j<n; j++){
    cin>>arr[i][j];
    }
    
    
}
}
void displayArray(int arr[][100], int m, int n){
    for (int i=0; i<m; i++){
for(int j=0; j<n; j++){
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
void printRowSum(int arr[][100], int m, int n){
    for (int i=0; i<m; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is: "<<sum<<endl;
    }
}
void printColumnSum(int arr[][100], int m, int n){
    for (int j=0; j<n; j++){
        int sum = 0;
        for(int i=0; i<m; i++){
            sum += arr[i][j];
        }
        cout<<"Sum of column "<<j+1<<" is: "<<sum<<endl;
    }
}
int primaryDiagonalSum(int arr[][100],  int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        
        sum += arr[i][i];
        
    }
    return sum;
}
int secondaryDiagnolSum(int arr[][100], int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i][n-1-i];
    }
    return sum;
}
int main(){
    int arr[100][100], m, n;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;

    cout<<"Enter the elements of the array: "<<endl;
    inputArray(arr, m, n);
    cout<<"The array is: "<<endl;
    displayArray(arr, m, n);
    cout<<"Row sums are: "<<endl;
    printRowSum(arr, m, n);
    cout<<"Column sums are: "<<endl;
    printColumnSum(arr, m, n);
    cout<<"primary diagnol sum:";
    cout<<primaryDiagonalSum(arr, n)<<endl;
    cout<<"seconary diagnol sum:";
    cout<<secondaryDiagnolSum(arr, n)<<endl;
    return 0;
}