#include<iostream>
using namespace std;
int main(){
    int n1=0 ;
    int n2 =1;
    int n;
    cout<<"nos you want to print "<<endl;
    cin>>n;
    cout << n1 <<",";
    cout <<n2;
    for(int i=1; i<n; i++){
       int next =n1 + n2;
        cout<<"," << next;
        n1 = n2;
        n2 = next;

    }
}