#include<iostream>
using namespace std;
void arrayLeader(int arr[], int n){
    int maxFromRight = arr[n-1];
    cout<<maxFromRight<<" ";
    for(int i=n-2; i>=0; i--){
        if(arr[i]>maxFromRight){
            maxFromRight=arr[i];
            cout<<arr[i] << " ";
        }
    }
}
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    
    cout<<"The array leaders are :";
    arrayLeader(arr,n);

    cout<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
void findLeader(int arr[], int n){
int tempStorage[100];
int count=0;
 int maxFromRight=arr[n-1];
 tempStorage[count]=maxFromRight;
 count++;
 for(int i=n-2; >=0; i--){
 if(arr[i]>=maxFromRight){
 maxFromRight=arr[i];
 tempStorage[count]=arr[i];
 count++;
 }
 }
 cout<<"Leaders :";
 for(int i=count-1; i>=0; i--){
 cout<<tempStorage[i]<< " "
 }
cout<<endl;
}
int main(){
int arr[]={16,17,4,3,5,2};
int n=6;
findLeaders(arr,n);
}

*/