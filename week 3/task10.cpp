#include<iostream>
using namespace std;
main(){
int wins;
cout<<"Enter the number of wins"<<endl;
cin>>wins;
int draws;
cout<<"Enter the number of draws"<<endl;
cin>>draws;
int losses;
cout<<"Enter the number of losses"<<endl;
cin>>losses;
wins=3*wins;
draws=1*draws;
losses=0*losses;
int points=wins+draws+losses;
cout<<"Pakistan has obtained "<<points <<" in Asia cup Tournament "<<endl;
}