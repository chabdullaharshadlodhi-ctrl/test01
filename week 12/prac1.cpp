#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr =&x;

    cout<<"value of x = "<<x<<endl;
    cout<<"Address of x = "<<&x<<endl;
    cout<<"Pointer at ptr = "<<*ptr<<endl;
     cout<<"Pointer at ptr = "<<ptr<<endl;

    return 0;
}