#include<iostream>
#include<conio.h>
#include<string>
#include<limits> // Required for buffer clearing

using namespace std;

int main() {
    int total_patients = 500;
    int current_patients = 0; 
    int ids[500];
    string names[500];
    string diseases[500];
    int wards[500];

    while(true) {
        system("cls"); 
        cout <<"------------------------------------------------------" << endl;
        cout <<"---------------HOSPITAL MANAGEMENT SYSTEM-------------" << endl;
        cout <<"------------------------------------------------------" << endl;
        cout << "\n USER MENU " << endl;
        cout << "1. Admin" << endl;
        cout << "2. Patient" << endl;
        cout << "3. Exit" << endl;
        cout << "\nChoose option : ";
        
        string user_option;
        cin >> user_option;
        
        if (user_option == "1") {
            bool login_success = false;
            for (int i = 0; i < 3; i++) {
                system("cls");
                cout << " Admin Login - Attempt " << i + 1 << "/3" << endl;
                cout << " Enter username : ";
                string user_name;
                cin >> user_name;
                cout << " Enter password : ";
                string password;
                cin >> password;

                if (user_name == "admin" && password == "1234") {
                    cout << "\nSuccessfully logged in!" << endl;
                    getch(); 
                    login_success = true;
                    break;
                } else {
                    cout << "\nInvalid credentials!" << endl;
                    getch();
                }
            }
            
            if (!login_success) {
                cout << "\nMax attempts exceeded. Returning to main menu." << endl;
                getch();
                continue;
            }

            // Admin menu loop
            while (true) {
                system("cls");
                cout << " --- ADMIN PANEL --- " << endl;
                cout << " 1. Show all patients " << endl;
                cout << " 2. Search patient " << endl;
                cout << " 3. Update patient record " << endl;
                cout << " 4. Generate report " << endl;
                cout << " 5. Delete record by name " << endl;
                cout << " 6. Log out " << endl;
                cout << "\n Choose option : ";
                
                string admin_option;
                cin >> admin_option;
                
                if (admin_option == "1") {
                    system("cls");
                    if (current_patients == 0) {
                        cout << "No patients admitted." << endl;
                    } else {
                        cout << "ID\tName\t\tDisease\t\tWard" << endl;
                        cout << "--------------------------------------------" << endl;
                        for (int i = 0; i < current_patients; i++) {
                            if (names[i] != "") {
                                cout << ids[i] << "\t" << names[i] << "\t\t" << diseases[i] << "\t\t" << wards[i] << endl;
                            }
                        }
                    }
                    getch();
                    
                } else if (admin_option == "2") {
                    system("cls");
                    cout << "Enter exact name to search: ";
                    string s_name;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer
                    getline(cin, s_name);
                    
                    bool found = false;
                    for (int i = 0; i < current_patients; i++) {
                        if (names[i] == s_name) {
                            cout << "\nRecord Found:" << endl;
                            cout << "ID: " << ids[i] << "\nName: " << names[i] << "\nDisease: " << diseases[i] << "\nWard: " << wards[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "No record found for: " << s_name << endl;
                    getch();
                    
                } else if (admin_option == "3") {
                    system("cls");
                    cout << "Enter name to update: ";
                    string u_name;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, u_name);
                    
                    int idx = -1;
                    for (int i = 0; i < current_patients; i++) {
                        if (names[i] == u_name) { idx = i; break; }
                    }
                    if (idx != -1) {
                        cout << "Enter New ID: "; cin >> ids[idx];
                        cin.ignore();
                        cout << "Enter New Name: "; getline(cin, names[idx]);
                        cout << "Enter New Disease: "; getline(cin, diseases[idx]);
                        cout << "Enter New Ward: "; cin >> wards[idx];
                        cout << "\nUpdate Successful!" << endl;
                    } else {
                        cout << "Patient not found." << endl;
                    }
                    getch();
                    
                } else if (admin_option == "4") {
                    system("cls");
                    int w1=0, w2=0, w3=0;
                    for(int i=0; i<current_patients; i++) {
                        if(wards[i]==1) w1++; else if(wards[i]==2) w2++; else if(wards[i]==3) w3++;
                    }
                    cout << "--- HOSPITAL REPORT ---" << endl;
                    cout << "Total Patients: " << current_patients << endl;
                    cout << "Ward 1: " << w1 << "\nWard 2: " << w2 << "\nWard 3: " << w3 << endl;
                    getch();
                    
                } else if (admin_option == "5") {
                    system("cls");
                    cout << "Enter name to delete: ";
                    string d_name;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, d_name);
                    
                    bool found = false;
                    for (int i = 0; i < current_patients; i++) {
                        if (names[i] == d_name) {
                            names[i] = ""; // Simple delete (set to empty)
                            cout << "Record deleted." << endl;
                            found = true;
                            break;
                        }
                    }
                    if(!found) cout << "Not found." << endl;
                    getch();
                    
                } else if (admin_option == "6") {
                    break; // Logout
                } else {
                    cout << "Invalid Option!" << endl;
                    getch();
                }
            } 
            
        } else if (user_option == "2") {
            system("cls");
            if (current_patients >= total_patients) {
                cout << "Hospital Full!" << endl;
                getch();
                continue;
            }
            cout << " --- ADMIT PATIENT --- " << endl;
            cout << "Enter ID: "; cin >> ids[current_patients];
            cin.ignore(); 
            cout << "Enter Name: "; getline(cin, names[current_patients]);
            cout << "Enter Disease: "; getline(cin, diseases[current_patients]);
            cout << "Enter Ward (1-3): "; cin >> wards[current_patients];
            
            current_patients++;
            cout << "\nAdmitted Successfully!" << endl;
            getch();

        } else if (user_option == "3") {
            break; 
        } else {
            cout << "Invalid Option!" << endl;
            getch();
        }
    } 
    return 0;
}