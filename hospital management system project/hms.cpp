#include <iostream>
#include <string>
#include <conio.h> // Added for getch()

using namespace std;

int main() {
    // Basic data structures: Parallel arrays to hold patient data
    const int MAX_PATIENTS = 100;
    int ids[MAX_PATIENTS];
    string names[MAX_PATIENTS];
    int ages[MAX_PATIENTS];
    string diseases[MAX_PATIENTS];
    int patientCount = 0;

    // History tracking arrays (stores last 5 additions)
    const int HIST_SIZE = 5;
    int hist_ids[HIST_SIZE];
    string hist_names[HIST_SIZE];
    int hist_ages[HIST_SIZE];
    string hist_diseases[HIST_SIZE];
    int histCount = 0; 

    while (true) {
        system("cls");
        cout << "------------------------------------------------------------" << endl;
        cout << "-------------- HOSPITAL MANAGEMENT SYSTEM ------------------" << endl;
        cout << "------------------------------------------------------------" << endl << endl;
        cout << "User Main Menu : " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Receptionist " << endl;
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
                    cout << "\nPress any key to continue..."; 
                    getch(); 
                    break;
                } else {
                    cout << "\nWrong username or password. Try again.\n\n";
                }
            }

            if (!loggedIn) {
                cout << "Max login attempts exceeded. Returning to main menu." << endl;
                cout << "\nPress any key to continue..."; 
                getch();
                continue; 
            }

            // Admin Menu Loop
            while (loggedIn) {
                system("cls");
                cout << "Admin Menu : " << endl;
                cout << "1. Show all patients (Alphabetical) " << endl;
                cout << "2. Search patient by name " << endl;
                cout << "3. Update patient record " << endl;
                cout << "4. Delete patient record " << endl;
                cout << "5. Add new patient record " << endl;
                cout << "6. View History (Last 5 Additions)" << endl;
                cout << "7. Log out " << endl;
                cout << "Choose option : ";
                
                int admin_option;
                cin >> admin_option;

                if (admin_option == 1) { // Read & Auto-Sort
                    if (patientCount == 0) {
                        cout << "No records found!" << endl;
                    } else {
                        // Auto-sort alphabetically using Bubble Sort before displaying
                        for (int i = 0; i < patientCount - 1; i++) {
                            for (int j = 0; j < patientCount - i - 1; j++) {
                                if (names[j] > names[j + 1]) {
                                    swap(names[j], names[j + 1]);
                                    swap(ids[j], ids[j + 1]);
                                    swap(ages[j], ages[j + 1]);
                                    swap(diseases[j], diseases[j + 1]);
                                }
                            }
                        }

                        cout << "\n--- Patient Records (Sorted by Name) ---" << endl;
                        for (int i = 0; i < patientCount; i++) {
                            cout << "ID: " << ids[i] << " | Name: " << names[i] 
                                 << " | Age: " << ages[i] << " | Disease: " << diseases[i] << endl;
                        }
                    }
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (admin_option == 2) { // Search
                    cout << "Enter patient name to search: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    
                    for (int i = 0; i < patientCount; i++) {
                        if (names[i] == searchName) {
                            cout << "\nRecord Found!" << endl;
                            cout << "ID: " << ids[i] << " | Name: " << names[i] 
                                 << " | Age: " << ages[i] << " | Disease: " << diseases[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Patient not found." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (admin_option == 3) { // Update
                    cout << "Enter patient name to update: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    
                    for (int i = 0; i < patientCount; i++) {
                        if (names[i] == searchName) {
                            cout << "Enter New ID: "; cin >> ids[i];
                            cout << "Enter New Name: "; cin >> names[i];
                            cout << "Enter New Age: "; cin >> ages[i];
                            cout << "Enter New Disease: "; cin >> diseases[i];
                            cout << "Record updated successfully!" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Patient not found." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (admin_option == 4) { // Delete
                    cout << "Enter patient name to delete: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    
                    for (int i = 0; i < patientCount; i++) {
                        if (names[i] == searchName) {
                            for (int j = i; j < patientCount - 1; j++) {
                                ids[j] = ids[j + 1];
                                names[j] = names[j + 1];
                                ages[j] = ages[j + 1];
                                diseases[j] = diseases[j + 1];
                            }
                            patientCount--; 
                            cout << "Record deleted successfully!" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Patient not found." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (admin_option == 5) { // Create (Add) & Update History
                    if (patientCount < MAX_PATIENTS) {
                        cout << "Enter Patient ID: "; cin >> ids[patientCount];
                        cout << "Enter Patient Name: "; cin >> names[patientCount];
                        cout << "Enter Patient Age: "; cin >> ages[patientCount];
                        cout << "Enter Patient Disease: "; cin >> diseases[patientCount];
                        
                        // Shift history elements down to make room for the new entry
                        for (int i = HIST_SIZE - 1; i > 0; i--) {
                            hist_ids[i] = hist_ids[i - 1];
                            hist_names[i] = hist_names[i - 1];
                            hist_ages[i] = hist_ages[i - 1];
                            hist_diseases[i] = hist_diseases[i - 1];
                        }
                        // Insert new record at the top of history
                        hist_ids[0] = ids[patientCount];
                        hist_names[0] = names[patientCount];
                        hist_ages[0] = ages[patientCount];
                        hist_diseases[0] = diseases[patientCount];
                        
                        if (histCount < HIST_SIZE) histCount++;
                        patientCount++;
                        
                        cout << "Patient added successfully!" << endl;
                    } else {
                        cout << "System is full! Cannot add more patients." << endl;
                    }
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (admin_option == 6) { // View History
                    if (histCount == 0) {
                        cout << "History is empty. No patients added yet." << endl;
                    } else {
                        cout << "\n--- Last " << histCount << " Patient Additions ---" << endl;
                        for (int i = 0; i < histCount; i++) {
                            cout << "ID: " << hist_ids[i] << " | Name: " << hist_names[i] 
                                 << " | Age: " << hist_ages[i] << " | Disease: " << hist_diseases[i] << endl;
                        }
                    }
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (admin_option == 7) { // Log out
                    loggedIn = false;
                    cout << "Logging out..." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();
                    
                } else {
                    cout << "Invalid option." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();
                }
            }

        } else if (option == 2) { // Receptionist Panel
            while (true) {
                system("cls");
                cout << "Receptionist Menu : " << endl;
                cout << "1. Add new patient record " << endl;
                cout << "2. Show all patients " << endl;
                cout << "3. Search patient by name " << endl;
                cout << "4. Log out " << endl;
                cout << "Choose option : ";
                
                int rec_option;
                cin >> rec_option;

                if (rec_option == 1) { // Create (Add) & Update History
                    if (patientCount < MAX_PATIENTS) {
                        cout << "Enter Patient ID: "; cin >> ids[patientCount];
                        cout << "Enter Patient Name: "; cin >> names[patientCount];
                        cout << "Enter Patient Age: "; cin >> ages[patientCount];
                        cout << "Enter Patient Disease: "; cin >> diseases[patientCount];
                        
                        // Shift history down
                        for (int i = HIST_SIZE - 1; i > 0; i--) {
                            hist_ids[i] = hist_ids[i - 1];
                            hist_names[i] = hist_names[i - 1];
                            hist_ages[i] = hist_ages[i - 1];
                            hist_diseases[i] = hist_diseases[i - 1];
                        }
                        // Insert new record
                        hist_ids[0] = ids[patientCount];
                        hist_names[0] = names[patientCount];
                        hist_ages[0] = ages[patientCount];
                        hist_diseases[0] = diseases[patientCount];
                        
                        if (histCount < HIST_SIZE) histCount++;
                        patientCount++;
                        
                        cout << "Patient added successfully!" << endl;
                    } else {
                        cout << "System is full! Cannot add more patients." << endl;
                    }
                    cout << "\nPress any key to continue..."; 
                    getch();
                    
                } else if (rec_option == 2) { // Read
                    if (patientCount == 0) {
                        cout << "No records found!" << endl;
                    } else {
                        cout << "\n--- Patient Records ---" << endl;
                        for (int i = 0; i < patientCount; i++) {
                            cout << "ID: " << ids[i] << " | Name: " << names[i] 
                                 << " | Age: " << ages[i] << " | Disease: " << diseases[i] << endl;
                        }
                    }
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (rec_option == 3) { // Search
                    cout << "Enter patient name to search: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    for (int i = 0; i < patientCount; i++) {
                        if (names[i] == searchName) {
                            cout << "\nRecord Found!" << endl;
                            cout << "ID: " << ids[i] << " | Name: " << names[i] 
                                 << " | Age: " << ages[i] << " | Disease: " << diseases[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Patient not found." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();

                } else if (rec_option == 4) { // Logout
                    cout << "Logging out..." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();
                    break;
                    
                } else {
                    cout << "Invalid option." << endl;
                    cout << "\nPress any key to continue..."; 
                    getch();
                }
            }

        } else if (option == 3) { // Exit
            system("cls");
            cout << "Exiting the system. Goodbye!" << endl;
            break;

        } else {
            cout << "Invalid option selected. Please try again." << endl;
            cout << "\nPress any key to continue..."; 
            getch();
        }
    }

    return 0;
}