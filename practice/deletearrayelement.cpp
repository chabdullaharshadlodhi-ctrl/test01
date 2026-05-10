 #include<iostream>
 using namespace std;
 int main(){
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of the array: ";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int index;
        cout<<"Enter the index of the element to delete: ";
        cin>>index;
        if(index < 0 || index >= n){
            cout<<"Invalid index. No element deleted."<<endl;
            return 1; // Exit with an error code
        }
        for(int i=index; i<n-1; i++){ // Start from the index we want to delete and it runs until n-1 not n because we are accessing i+1 in the loop or agr n tk chlayen ge to akhri element tk access krna padega jo ke out of bounds hoga
            arr[i] = arr[i+1]; // Shift elements to the left
        }
        n--; // Reduce the size of the array
        cout<<"Array after deletion: ";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
           
        }
         cout<<endl;
        
        return 0;
 }