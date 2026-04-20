#include <iostream>
#include <string>

using namespace std;

int main() {
    // Parallel arrays for banking data
    const int MAX_ACCOUNTS = 100;
    int accNums[MAX_ACCOUNTS];
    string names[MAX_ACCOUNTS];
    string types[MAX_ACCOUNTS]; // e.g., Savings, Current
    double balances[MAX_ACCOUNTS];
    int accCount = 0;

    // History tracking arrays (last 5 creations)
    const int HIST_SIZE = 5;
    int hist_accNums[HIST_SIZE];
    string hist_names[HIST_SIZE];
    string hist_types[HIST_SIZE];
    double hist_balances[HIST_SIZE];
    int histCount = 0; 

    while (true) {
        system("cls");
        cout << "------------------------------------------------------------" << endl;
        cout << "-------------- BANKING MANAGEMENT SYSTEM -------------------" << endl;
        cout << "------------------------------------------------------------" << endl << endl;
        cout << "User Main Menu : " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Bank Staff / Teller " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose option : ";
        
        int option;
        cin >> option;
        
        if (option == 1) { // Admin Panel
            system("cls");
            bool loggedIn = false;
            
            // Login System
            for (int i = 0; i < 3; i++) {
                cout << "Admin Login Attempt " << i + 1 << " of 3" << endl;
                cout << "Enter username : ";
                string user_name;
                cin >> user_name;
                cout << "Enter password : ";
                string password;
                cin >> password;

                if (user_name == "admin" && password == "1234") {
                    cout << "\nSuccessfully logged in!" << endl;
                    loggedIn = true;
                    system("pause"); 
                    break;
                } else {
                    cout << "\nWrong username or password. Try again.\n\n";
                }
            }

            if (!loggedIn) {
                cout << "Max login attempts exceeded. Returning to main menu." << endl;
                system("pause");
                continue; 
            }

            // Admin Menu Loop
            while (loggedIn) {
                system("cls");
                cout << "Admin Menu : " << endl;
                cout << "1. Show all accounts (Alphabetical) " << endl;
                cout << "2. Search account by name " << endl;
                cout << "3. Update account record " << endl;
                cout << "4. Delete account " << endl;
                cout << "5. Add new account " << endl;
                cout << "6. View History (Last 5 Additions)" << endl;
                cout << "7. Log out " << endl;
                cout << "Choose option : ";
                
                int admin_option;
                cin >> admin_option;

                if (admin_option == 1) { // Read & Sort
                    if (accCount == 0) {
                        cout << "No records found!" << endl;
                    } else {
                        // Bubble sort alphabetically by name
                        for (int i = 0; i < accCount - 1; i++) {
                            for (int j = 0; j < accCount - i - 1; j++) {
                                if (names[j] > names[j + 1]) {
                                    swap(names[j], names[j + 1]);
                                    swap(accNums[j], accNums[j + 1]);
                                    swap(types[j], types[j + 1]);
                                    swap(balances[j], balances[j + 1]);
                                }
                            }
                        }

                        cout << "\n--- Account Records (Sorted by Name) ---" << endl;
                        for (int i = 0; i < accCount; i++) {
                            cout << "A/C: " << accNums[i] << " | Name: " << names[i] 
                                 << " | Type: " << types[i] << " | Balance: $" << balances[i] << endl;
                        }
                    }
                    system("pause");

                } else if (admin_option == 2) { // Search
                    cout << "Enter account name to search: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    for (int i = 0; i < accCount; i++) {
                        if (names[i] == searchName) {
                            cout << "\nRecord Found!" << endl;
                            cout << "A/C: " << accNums[i] << " | Name: " << names[i] 
                                 << " | Type: " << types[i] << " | Balance: $" << balances[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Account not found." << endl;
                    system("pause");

                } else if (admin_option == 3) { // Update
                    cout << "Enter account name to update: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    for (int i = 0; i < accCount; i++) {
                        if (names[i] == searchName) {
                            cout << "Enter New A/C Number: "; cin >> accNums[i];
                            cout << "Enter New Name: "; cin >> names[i];
                            cout << "Enter New Type (Savings/Current): "; cin >> types[i];
                            cout << "Enter New Balance: "; cin >> balances[i];
                            cout << "Record updated successfully!" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Account not found." << endl;
                    system("pause");

                } else if (admin_option == 4) { // Delete
                    cout << "Enter account name to delete: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    for (int i = 0; i < accCount; i++) {
                        if (names[i] == searchName) {
                            for (int j = i; j < accCount - 1; j++) {
                                accNums[j] = accNums[j + 1];
                                names[j] = names[j + 1];
                                types[j] = types[j + 1];
                                balances[j] = balances[j + 1];
                            }
                            accCount--; 
                            cout << "Account closed/deleted successfully!" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Account not found." << endl;
                    system("pause");

                } else if (admin_option == 5) { // Create & History
                    if (accCount < MAX_ACCOUNTS) {
                        cout << "Enter A/C Number: "; cin >> accNums[accCount];
                        cout << "Enter Account Name: "; cin >> names[accCount];
                        cout << "Enter Account Type: "; cin >> types[accCount];
                        cout << "Enter Initial Balance: "; cin >> balances[accCount];
                        
                        // Shift history
                        for (int i = HIST_SIZE - 1; i > 0; i--) {
                            hist_accNums[i] = hist_accNums[i - 1];
                            hist_names[i] = hist_names[i - 1];
                            hist_types[i] = hist_types[i - 1];
                            hist_balances[i] = hist_balances[i - 1];
                        }
                        // Add to history top
                        hist_accNums[0] = accNums[accCount];
                        hist_names[0] = names[accCount];
                        hist_types[0] = types[accCount];
                        hist_balances[0] = balances[accCount];
                        
                        if (histCount < HIST_SIZE) histCount++;
                        accCount++;
                        cout << "Account created successfully!" << endl;
                    } else {
                        cout << "Bank database is full!" << endl;
                    }
                    system("pause");

                } else if (admin_option == 6) { // View History
                    if (histCount == 0) {
                        cout << "History is empty." << endl;
                    } else {
                        cout << "\n--- Last " << histCount << " Accounts Created ---" << endl;
                        for (int i = 0; i < histCount; i++) {
                            cout << "A/C: " << hist_accNums[i] << " | Name: " << hist_names[i] 
                                 << " | Type: " << hist_types[i] << " | Balance: $" << hist_balances[i] << endl;
                        }
                    }
                    system("pause");

                } else if (admin_option == 7) { // Log out
                    loggedIn = false;
                    cout << "Logging out..." << endl;
                    system("pause");
                } else {
                    cout << "Invalid option." << endl;
                    system("pause");
                }
            }

        } else if (option == 2) { // Staff / Teller Panel
            while (true) {
                system("cls");
                cout << "Staff Menu : " << endl;
                cout << "1. Add new account " << endl;
                cout << "2. Deposit / Withdraw " << endl;
                cout << "3. Show all accounts " << endl;
                cout << "4. Log out " << endl;
                cout << "Choose option : ";
                
                int staff_option;
                cin >> staff_option;

                if (staff_option == 1) { // Create Account
                    if (accCount < MAX_ACCOUNTS) {
                        cout << "Enter A/C Number: "; cin >> accNums[accCount];
                        cout << "Enter Account Name: "; cin >> names[accCount];
                        cout << "Enter Account Type: "; cin >> types[accCount];
                        cout << "Enter Initial Balance: "; cin >> balances[accCount];
                        
                        for (int i = HIST_SIZE - 1; i > 0; i--) {
                            hist_accNums[i] = hist_accNums[i - 1];
                            hist_names[i] = hist_names[i - 1];
                            hist_types[i] = hist_types[i - 1];
                            hist_balances[i] = hist_balances[i - 1];
                        }
                        hist_accNums[0] = accNums[accCount];
                        hist_names[0] = names[accCount];
                        hist_types[0] = types[accCount];
                        hist_balances[0] = balances[accCount];
                        
                        if (histCount < HIST_SIZE) histCount++;
                        accCount++;
                        cout << "Account created successfully!" << endl;
                    } else {
                        cout << "Bank database is full!" << endl;
                    }
                    system("pause");
                    
                } else if (staff_option == 2) { // Transaction
                    cout << "Enter account name for transaction: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    for (int i = 0; i < accCount; i++) {
                        if (names[i] == searchName) {
                            found = true;
                            cout << "Current Balance: $" << balances[i] << endl;
                            cout << "1. Deposit\n2. Withdraw\nChoose: ";
                            int trans_op;
                            cin >> trans_op;
                            if (trans_op == 1) {
                                double amt;
                                cout << "Enter amount to deposit: "; cin >> amt;
                                balances[i] += amt;
                                cout << "Deposit successful! New Balance: $" << balances[i] << endl;
                            } else if (trans_op == 2) {
                                double amt;
                                cout << "Enter amount to withdraw: "; cin >> amt;
                                if (balances[i] >= amt) {
                                    balances[i] -= amt;
                                    cout << "Withdrawal successful! New Balance: $" << balances[i] << endl;
                                } else {
                                    cout << "Insufficient funds!" << endl;
                                }
                            }
                            break;
                        }
                    }
                    if (!found) cout << "Account not found." << endl;
                    system("pause");

                } else if (staff_option == 3) { // View All
                    if (accCount == 0) {
                        cout << "No records found!" << endl;
                    } else {
                        cout << "\n--- Account Records ---" << endl;
                        for (int i = 0; i < accCount; i++) {
                            cout << "A/C: " << accNums[i] << " | Name: " << names[i] 
                                 << " | Type: " << types[i] << " | Balance: $" << balances[i] << endl;
                        }
                    }
                    system("pause");

                } else if (staff_option == 4) { // Logout
                    cout << "Logging out..." << endl;
                    system("pause");
                    break;
                } else {
                    cout << "Invalid option." << endl;
                    system("pause");
                }
            }

        } else if (option == 3) { // Exit
            system("cls");
            cout << "Exiting the banking system. Goodbye!" << endl;
            break;

        } else {
            cout << "Invalid option selected. Please try again." << endl;
            system("pause");
        }
    }

    return 0;
}