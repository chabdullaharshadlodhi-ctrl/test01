#include<iostream>
using namespace std;
main() {
int imposters;
int players;
float chance;

cout<<"Enter imposters:"<<endl;
cin>>imposters;

cout<<"Enter players:"<<endl;
cin>>players;

chance=(imposters/players)*100;

cout<<"chance ="<<chance<<"%"<<endl;

}