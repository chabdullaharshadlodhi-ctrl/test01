#include<iostream>
using namespace std;
main() {

int area;
int width;
int height;
int walls_painted;

cout<<"Enter paint area:"<<endl;
cin>>area;

cout<<"Enter width:"<<endl;
cin>>width;

cout<<"Enter height:"<<endl;
cin>>height;

walls_painted=area/(width*height);

cout<<"Walls painted = "<<walls_painted<<endl;

}