#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"---Simple Calculator---"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Clear Screen"<<endl;
    cout<<"6. Exit"<<endl;
    int choice;
    cout<<"Enter your choice(1-6): ";
    cin>>choice;
    if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            if (choice == 1) {
            cout << "Result: " << num1 + num2 << "\n";
        } 
        else if (choice == 2) {
            cout << "Result: " << num1 - num2 << "\n";
        } 
        else if (choice == 3) {
            cout << "Result: " << num1 * num2 << "\n";
        } 
        else if (choice == 4) {
            
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero.\n";
            } else {
                cout << "Result: " << num1 / num2 << "\n";
            }
        } 
        else if (choice == 5) {
            cout << "Screen cleared.\n";
        } 
        else if (choice == 6) {
            cout << "Exiting Calculator. Goodbye!\n";
        } 
        else {
            cout << "Invalid choice! Please select 1-6.\n";
        }

    } while (choice != 6); 

    return 0;
}
