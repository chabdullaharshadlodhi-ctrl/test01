#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"---Library System---"<<endl;
    cout<<"1. Add Book"<<endl;
    cout<<"2. View Book"<<endl;
    cout<<"3. Borrow Book"<<endl;
    cout<<"4. Issue Book"<<endl;
    cout<<"6. Exit"<<endl;
    int choice;
    cout<<"Enter your choice(1-5): ";
    cin>>choice;
   
            if (choice == 1) {
            cout << "Enter Book Name: ";
            string name;
            cin>>name;
            cout<<"You added a book: "<<name<<endl;
        } 
        else if (choice == 2) {
            cout << "You Selected View Book";
        } 
        else if (choice == 3) {
            cout << "You Selected Borrow Book";
        } 
        else if (choice == 4) {
            cout<<"You Selected Issue Book";
            } 
        
         
        else if (choice == 5) {
            cout << "Programm Ended, Exiting";
        } 
        
        else {
            cout << "Invalid choice! Please select 1-5";
        }

    while (choice != 5); 

    return 0;
}
