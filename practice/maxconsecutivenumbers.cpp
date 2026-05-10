#include<iostream>
using namespace std;
int findconsecutivenumbers(int arr[],int n){
     if(n==0){
     return 0;
    }
    int maxStreak=1;
     int currentStreak=1;
     for(int i=1; i < n; i++){
        if(arr[i]==arr[i-1]){
            currentStreak++;
        }
        
        else{
            if(currentStreak>maxStreak){
            maxStreak=currentStreak;
        }
        currentStreak=1;

        }
     }
     if(currentStreak>maxStreak){
            maxStreak=currentStreak;
        }
            return maxStreak;
    
}
int main(){
    int arr[]={0,1,0,1,1,1,1};
    int n=7;

    int result = findconsecutivenumbers(arr, n);
    cout<<"max consecutive numbers are: "<<result;

return 0;
}