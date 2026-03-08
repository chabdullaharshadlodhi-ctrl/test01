#include<iostream>
using namespace std;
int main(){
    int temp1,temp2;
    cout<<"Enter the first temperature :"<<endl;
    cin>>temp1;
    cout<<"Enter the second temperature :"<<endl;
    cin>>temp2;
    int difference = temp1-temp2;

    if(difference > 10){
    cout<<"Differnce is too big"<<endl;
    cout<<"program ends"<<endl;}

else if(difference < 10){
cout<<"Program ends"<<endl;}

return 0;
 }