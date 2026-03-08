#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Please Enter your name: ";
    cin>>name;
    if(name == "Ali"){
        cout<<"Welcome "<<name; 
    }
    if (name != "Ali"){
        cout<<"Try again!";
    }

}