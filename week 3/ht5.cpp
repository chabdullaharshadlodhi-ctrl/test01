#include<iostream>
using namespace std;
 main(){

string name;
int no_of_days;
int amount_of_weight;

cout<<"Enter name:"<<endl;
cin>>name;

cout<<"Enter amount of weight you want to lose in killograms:"<<endl;
cin>>amount_of_weight;

no_of_days=amount_of_weight*15;

cout<<"The number of days required to lose "<<amount_of_weight<< " kg is "<<no_of_days<<endl;


}
