#include<iostream>
using namespace std;
main() {

int initial_velocity;
int final_velocity;
int acceleration;
int time;

cout<<"Enter initial velocity(ms-1):"<<endl;
cin>>initial_velocity;

cout<<"Enter acceleration(ms-2):"<<endl;
cin>>acceleration;

cout<<"Enter time(s):"<<endl;
cin>>time;

final_velocity=initial_velocity+(acceleration*time);

cout<<"Final velocity in(ms-1):"<<final_velocity<<endl;

}