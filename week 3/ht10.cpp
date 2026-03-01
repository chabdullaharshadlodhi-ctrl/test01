#include<iostream>
using namespace std;
main(){
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,add,multiply,subtract,res1,res2;
cout<<"Enter 15 numbers one by one :"<<endl;
cin>>num1;
cin>>num2;
cin>>num3;
cin>>num4;
cin>>num5;
cin>>num6;
cin>>num7;
cin>>num8;
cin>>num9;
cin>>num10;
cin>>num11;
cin>>num12;
cin>>num13;
cin>>num14;
cin>>num15;
add=num1+num2+num3+num4+num5;
multiply=num6*num7*num8*num9*num10;
subtract=num11-num12-num13-num14-num15;
res1=add+multiply;
res2=res1-subtract;
cout<<"The final result is :"<<res2<<endl;

}