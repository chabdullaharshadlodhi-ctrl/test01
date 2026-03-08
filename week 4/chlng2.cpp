#include<iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    cout<<"Enter the three numbers: ";
    cin>>n1>>n2>>n3;
    if (n1 > n2 && n1 > n3){
        cout<<"The largest number is: "<<n1;
    }
    else if (n2 > n1 && n2 > n3){
        cout<<"The largest number is: "<<n2;
    }
    else if (n3 > n1 && n3 > n2){
        cout<<"The largest number is: "<<n3;
    }
    else{
        cout<<"All numbers are equal";
    }
    return 0;
}