#include<iostream>
using namespace std;
main() {
int imposters;
float players;
float chance;

cout<<"Enter imposter count:"<<endl;
cin>>imposters;

cout<<"Enter player count:"<<endl;
cin>>players;

chance=(imposters/players)*100;

cout<<"chances of being an imposter:"<<chance<<"%"<<endl;

}