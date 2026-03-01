#include<iostream>
using namespace std;
main() {
float weight;
float bag_price;
float area;
float price_for_each_pound;
float cost;

cout<<"Enter the weight of the fertilizer bag:"<<endl;
cin>>weight;

cout<<"Enter the cost of the bag: $"<<endl;
cin>>bag_price;

cout<<"Enter the size of the area the bag can cover:"<<endl;
cin>>area;

price_for_each_pound=(bag_price/weight);
cost=bag_price/area;

cout<<"The price of the fertilizer for each pound is: $"<<price_for_each_pound<< " and the cost of using the fertilizer for each square foot of the garden is: $"<<cost<<endl;


}

