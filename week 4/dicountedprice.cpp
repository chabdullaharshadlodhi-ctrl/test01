#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the name of the country: ";
    string country;
    cin>>country;
    cout<<"Enter the price of the ticket: ";
    double price;
    cin>>price;
    if (country == "Ireland"){
        cout<<"The discount is: "<<price*0.10<<endl;
        cout<<"The final price after discount is: "<<price-(price*0.10)<<endl;
    }
    else if(country != "Ireland"){
        cout<<"The discount is: "<<price*0.05<<endl;
        cout<<"The final price after discount is: "<<price-(price*0.05)<<endl;
    }
    cout<<endl;
    return 0;
}