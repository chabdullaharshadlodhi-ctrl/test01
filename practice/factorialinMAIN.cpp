#include<iostream>
using namespace std;

    int factorial(int n){
        int factorial =1;
        for(int i=1; i<=n; i++){
            factorial = factorial * i;
        }
        return factorial;
    }
int main(){
    int n;//thid is the number for which we want to find the factorial or we can manually assign the value to n 
    cout<<"Enter a number to find its factorial: "<<endl;
    cin>>n;
    int result = factorial(n);
    cout<<"Factorial of "<<n<<" is: "<<result<<endl;    
    return 0;
}
