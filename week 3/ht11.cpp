#include<iostream>
using namespace std;
main(){
int age,moves,avg_years;
cout<<"Enter the person's age :"<<endl;
cin>>age;

cout<<"Enter the number of times they have moved :"<<endl;
cin>>moves;

avg_years=age/(moves+1);

cout<<"Average number of years lived in the same house: "<<avg_years<<endl;

} 

