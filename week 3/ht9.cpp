#include<iostream>
using namespace std;
main() {
int num,a,b,c,d,sum;
cout<<"Enter a four digit number: "<<endl;
cin>>num;

a  =num%10,num/=10;
b  =num%10,num/=10;
c  =num%10,num/=10;
d  =num%10,num/=10;

sum = a + b + c + d;
cout<<"Sum of individual digits is :"<<sum<<endl;
}

