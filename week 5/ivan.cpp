#include<iostream>
using namespace std;
main () {
    int age=18;
    int money;
    cout<<"Enter money: ";
    cin>>money;
    int year;
    cout<<"Enter year: ";
    cin>>year;
    for(int i=1800; i<=year; i++){
        if(i%2==0){
          money-=12000;
        }
        else{
            money-=12000+(50*age);
        }
        age++;
    }
    if(money>=0){
        cout<<"Yes! He will live a carefree life and will have "<<money<<" dollars left."<<endl;
    }
    else{
        cout<<"No! He will need "<<-money<<" dollars to survive."<<endl;
    }
}