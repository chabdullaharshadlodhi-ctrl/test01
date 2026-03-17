#include<iostream>
using namespace std;
int main() {
    int number;
    int total = 0;
    cout<<"Enter numbers: ";
    cin>>number;
    while(number>=0) {
        total+=number;
        cin>>number;
    }
    cout<<"Total: "<<total<<endl;
    return 0;
}