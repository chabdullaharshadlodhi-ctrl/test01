#include<iostream>
using namespace std;
int main(){
int totalmoney = 0;
int toycount = 0;
int currentgiftmoney = 10;
int age, machineprice, toyprice;
cout<<"Enter age, machine price and toy price: "<<endl;
cin>>age;
cin>>machineprice;
cin>>toyprice;

for(int i = 1; i <= age; i++){
if(i % 2 == 0){
totalmoney = currentgiftmoney + (totalmoney-1);
currentgiftmoney = currentgiftmoney + 10;
}
else{
toycount=toycount + 1;
}

}
totalmoney = totalmoney +(toycount * toyprice);
cout<<totalmoney<<endl;
if (totalmoney >= machineprice){
cout<<"Yes! ";
cout<<totalmoney - machineprice<<endl;
}
else {
cout<<"No! ";
cout<<machineprice - totalmoney<<endl;
}
return 0;

}