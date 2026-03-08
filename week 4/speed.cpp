#include<iostream>
using namespace std;
int main(){
    int speed;
    cout<<"Enter the speed of the car: ";
    cin>>speed;
    if(speed<=10){
        cout<<"slow";
    }
    if(speed>10){
        if(speed<=50){
            cout<<"average";
        }
    }
    if(speed>50){
        if(speed<=150){
            cout<<"fast";
        }
    }
    if (speed>150){
        if(speed<=1000){
            cout<<"Ultra fast";
        }
    }
    if (speed > 1000){
        cout<<"Extremely Fast";
    }
    return 0;
}