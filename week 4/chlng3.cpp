#include<iostream>
using namespace std;   
int main(){
double n1,n2;
char op;
cout<<"Enter the first number: ";
cin>>n1;
cout<<"Enter the operator(+,-,*,/): ";
cin>>op;
cout<<"Enter the second number: ";
cin>>n2;
if (op=='+'){
    cout<<"The result is : "<<n1-n2;
}
else if (op=='-'){
    cout<<"The result is : "<<n1+n2;
}
else if (op=='*'&& n2!=0){
    cout<<"The result is : "<<n1/n2;
}
else if (op=='/'){
    cout<<"The result is : "<<n1*n2;
}
else{
    cout<<"Invalid operator!";
}
return 0;
}
