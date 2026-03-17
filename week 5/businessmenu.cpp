#include<iostream>
using namespace std;
main(){
    while(true){
        cout<<"\n====Restaurant Management System ===="<<endl;
        cout<<"1. View Menu"<<endl;
        cout<<"2. Place Order"<<endl;
        cout<<"3. View Order Status"<<endl;
        cout<<"4. Generate Bill"<<endl;
        cout<<"5. Contact Staff"<<endl;
        cout<<"6. Exit"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice == 1){
            cout<<"You Selected: View Food Menu"<<endl; 
        }
        else if(choice == 2){
            cout<<"You Selected: Place Order"<<endl;
        }
        else if(choice == 3){
            cout<<"You Selected: View Order Status"<<endl;
        }
        else if(choice == 4){
            cout<<"You Selected: Generate Bill"<<endl;
        }
        else if(choice == 5){
            cout<<"You Selected: Contact Staff"<<endl;
        }
        else if(choice == 6){
            cout<<"You Selected: Exit"<<endl;
            break; 
        }
        else{
            cout<<"Invalid choice. Please try again."<<endl;
        }
}
}