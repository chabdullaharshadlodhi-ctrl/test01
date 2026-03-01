#include<iostream>
using namespace std;
main() {
int number_of_minutes;
int frames_per_second;
int total_number_of_frames;

cout<<"Enter minutes:"<<endl;
cin>>number_of_minutes;

cout<<"Enter fps:"<<endl;
cin>>frames_per_second;

total_number_of_frames=number_of_minutes*frames_per_second*60;

cout<<"Total Number of  frames ="<<total_number_of_frames<<endl;

}


