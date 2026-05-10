#include<iostream>
using namespace std;

int main() {
    int matrix[3][3];
    bool isIdentity = true;

    cout << "Enter the elements for a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout<< "The entered matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

   if(i==j){
    if(matrix[i][j]!=1){
     isIdentity = false;
     break;
   }
}else{
    if(matrix[i][j]!=0){
     isIdentity = false;
     break;
   }
}
}
if(!isIdentity) break;
    }
    if (isIdentity) {
        cout << "The matrix is an identity matrix." << endl;
    } else {
        cout << "The matrix is not an identity matrix." << endl;
    }


 return 0;
}