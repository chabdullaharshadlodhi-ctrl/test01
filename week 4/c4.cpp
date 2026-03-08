#include<iostream>
using namespace std;
int main() {
    string password="dalda";
    string input;

    cout<<"Enter password :";
    cin>>input;

    if(input==password){
        cout<<"The password is "<<password;

    }
else{
    cout<<"it is not that simple, try again";
}

}