#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter the student's name"<<endl;
cin>>name;
float marks1;
cout<<"Enter matric marks"<<endl;
cin>>marks1;
float marks2;
cout<<"Enter inter marks"<<endl;
cin>>marks2;
float marks3;
cout<<"Enter ECAT marks"<<endl;
cin>>marks3;
float percentage=(marks1/1100)*10+(marks2/1200)*40+(marks3/400)*50;
cout<<"The percentage is "<< percentage<<endl;
}