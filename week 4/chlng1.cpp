#include<iostream>
using namespace std;
int main(){
float disc1,disc2;
int bil11,bill2,bill;
cout<<"Enter your bill: ";
cin>>bill;
if(bill <= 5000){
disc1=bill*0.05;
float disc_bill=bill-disc1;
cout<<"Your discounted bill is :"<<disc_bill;
}
else{
    disc2=bill*0.1;
    float disc_bill=bill-disc2;
    cout<<"Your discounted bill is :"<<disc_bill;
}

}
