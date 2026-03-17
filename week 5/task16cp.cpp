#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        int number=5;
        for(int j=1; j<=i; j++){
            cout<<number--;
        }
        cout<<endl;
}
return 0;
}