#include<iostream>
using namespace std;

main(){
    while(true){
        cout<<"\n====Menu===="<<endl;
        cout<<"1.Say Hello"<<endl;
        cout<<"2.Say Goodbye"<<endl;
        cout<<"3.Exit"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice == 1){
            cout<<"Hello!Welcome to the program."<<endl;
        }
        else if(choice == 2){
            cout<<"Goodbye!Have a nice day!"<<endl;
        }
        else if(choice == 3){
            cout<<"Exiting the program. Goodbye!"<<endl;
            break; 
        }
        else{
            cout<<"Invalid choice. Please try again."<<endl;
        }

    }
}