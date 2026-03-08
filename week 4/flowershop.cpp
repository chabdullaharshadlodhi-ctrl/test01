#include<iostream>
using namespace std;
int main(){
    int red_roses, white_roses, tulips;
    float p1 = 2.00, p2 = 4.10, p3 = 2.50; 
    float discount;
    cout<<"Enter the number of red roses: ";
    cin>>red_roses;
    cout<<"Enter the number of white roses: ";
    cin>>white_roses;   
    cout<<"Enter the number of tulips: ";
    cin>>tulips;
    cout<<"Enter the price of red roses: ";

    float total_cost = (red_roses*p1) + (white_roses*p2) + (tulips*p3);
    cout<<"The total cost of the flowers is: "<<total_cost<<endl;
    if (total_cost > 200){
        cout<<"The discount is: "<<total_cost*0.2<<endl;
        cout<<"The original price is: "<<total_cost<<endl;
        cout<<"The final price after discount is: "<<total_cost-(total_cost*0.2)<<endl;
     return 0;
    }



























}