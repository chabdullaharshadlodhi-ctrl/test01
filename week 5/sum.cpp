#include<iostream>
using namespace std;
int main(){
int sum = 0;
for(int i=1; i<=100; i++){
    sum = sum + i;
}
//agr ham chahty hein ke wo hr dfa nmbr print kre to ham cout loop ki body ke andr likhty..
cout<<"The sum of numbers from 1 to 100 is: "<<sum<<endl;
return 0;

}