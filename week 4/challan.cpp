#include<iostream>
using namespace std;        
int main(){
int speed;
cout<<"Enter the speed of the car: ";
cin>>speed;
if (speed > 100){
    cout<<"HALT.... YOUR CAR WILL BE CHALLANED!"<<endl;
}
else if (speed < 100){
    cout<<"Perfect! you are going good!"<<endl;
}
return 0;
}