#include<iostream>
#include<string>
#include<cstdlib> // we use this for system cls command
#include<conio.h> // we use this for getch() command
using namespace std;

const int maxPatients=100;
int patientCount=10; // this will keep track of how many patients we have in the system
const int histSize=10; // this will keep track of how many patients history we want to keep in the system

void show_all_patients(string names[], int ids[], int ages[], string diseases[]){
                    // we are going to show patient data in tabular form
                    cout << "ID\tName\tAge\tDisease" << endl;
                    for(int i=0; i<patientCount; i++)
                    {
                        if(names[i] != "") // using this if function to avoid showing deleted records
                        {
                        cout << ids[i] << "\t" << names[i] << "\t" << ages[i] << "\t" << diseases[i] << endl;
                    }
                }
}
void search_patient_by_name(string names[], int ids[], int ages[], string diseases[]){
                    cout << "Enter the name of the patient to search: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;
                    int foundIndex = -1; // cant put it 0 because if the record is found at index 0 then it will be a problem(as we put sum=0 and multiply =1)
                    for(int i=0; i<patientCount; i++)
                    {
                        if(names[i] == searchName)
                        {
                            found = true;
                            foundIndex = i;
                        }
                    }
                    if(found == false)
                    {
                        cout << "patient not found" <<endl;
                    }
                    else
                    {
                        cout << "ID\tName\tAge\tDisease" << endl;
                        cout << ids[foundIndex] << "\t" << names[foundIndex] << "\t" << ages[foundIndex] << "\t" << diseases[foundIndex] << endl;
                    }
                    cout << "Press any key to continue..." << endl;
                    getch();
}
void update_patient_information(string names[], int ids[], int ages[], string diseases[]){
                    cout << "Enter the name of the patient to update: ";
                    string updateName;
                    cin >> updateName;
                    bool found = false; // we use this to check if the record is found or not kiu ke agr name hoga to hi update kr skien ge 
                    int foundIndex = -1;
                    for(int i=0; i<patientCount; i++)
                    {
                        if(names[i] == updateName)
                        {
                            found = true;
                            foundIndex = i;
                        }
                    }
                    if(found == true)
                    {
                        cout<<"|______old record______|"<<endl;
                        cout<< "ID\tName\tAge\tDisease" << endl;
                        cout << ids[foundIndex] << "\t" << names[foundIndex] << "\t" << ages[foundIndex] << "\t" << diseases[foundIndex] << endl;

                            cout << "Enter new record : " << endl;
                            cout << "Enter your id : ";
                            int id;
                            cin >> id;
                            cout << "Enter your name : ";
                            string name;
                            cin >> name;
                            cout << "Enter your age : ";
                            int age;
                            cin >> age;
                            cout << "Enter your disease : ";
                            string disease;
                            cin >> disease;
                            ids[foundIndex] = id;
                            names[foundIndex] = name;
                            ages[foundIndex] = age;
                            diseases[foundIndex] = disease;
                            cout<< "your information have been saved successfully!" << endl;

                    }
                    else
                    {
                        cout << "patient not found" << endl;
                    }
                    
}


void delete_patient(string names[], int ids[], int ages[], string diseases[]){
                    cout << "Enter the name of the patient to delete: ";
                    string deleteName;
                    cin >> deleteName;
                    bool found = false;
                    for (int i = 0; i < patientCount; i++) {
                        if (names[i] == deleteName) {
                            for(int j = i; j<patientCount - 1; j++) {
                                ids[j] = ids[j + 1];
                                names[j] = names[j + 1];
                                ages[j] = ages[j + 1];
                                diseases[j] = diseases[j + 1];
                            }
                            // After shifting, decrease the patient count
                            patientCount--;
                            cout << "Record deleted successfully!" << endl;
                            found = true;
                            break;
                        }
                    }
                   
                    if(found == false)
                    {
                        cout << "patient not found" << endl;
                    }
}

// FIX 2: add_new_patient - corrected patientCount increment logic (was checking histSize instead of maxPatients)
void add_new_patient(string names[], int ids[], int ages[], string diseases[], int histIds[], string histNames[], int histAges[], string histDiseases[]){
                     
                        if(patientCount < maxPatients){
                            int id;
                            string name;
                            int age;
                            string disease;
                            cout << "Enter new patient record: " << endl;
    
                            cout << "Enter your id : ";                    
                            cin >> id;
    
                            cout << "Enter your name : ";                      
                            cin >> name;
    
                            cout << "Enter your age : ";                        
                            cin >> age;
    
                            cout << "Enter your disease : ";                       
                            cin >> disease;
                            
                            // Add new patient record to the main arrays whereever the next index is available
                            ids[patientCount] = id;
                            names[patientCount] = name;
                            ages[patientCount] = age;
                            diseases[patientCount] = disease;
    
                            // now we have to add this in history
                            //right shift technique to add new rec at beginning
                            for (int i = histSize - 1; i > 0; i--) {
                                histIds[i] = histIds[i - 1];
                                histNames[i] = histNames[i - 1];
                                histAges[i] = histAges[i - 1];
                                histDiseases[i] = histDiseases[i - 1];
                            }
                            // Insert new record at the beginning of history
                            histIds[0] = ids[patientCount];
                            histNames[0] = names[patientCount];
                            histAges[0] = ages[patientCount];
                            histDiseases[0] = diseases[patientCount];

                            patientCount++;
                            cout << "Patient added successfully!" << endl;

                        } else {
                            cout << "System is full! Cannot add more patients." << endl;
                        }
                        cout << "Press any key to continue";
                        getch();
}

void view_patient_history(int histIds[], string histNames[], int histAges[], string histDiseases[]){
                    cout << "ID\tName\tAge\tDisease" << endl;
                    for(int i=0; i<histSize; i++){
                        if(histNames[i] != ""){ // so that is doesnt show empty records
                            cout << histIds[i] << "\t" << histNames[i] << "\t" << histAges[i] << "\t" << histDiseases[i] << endl;
                        }
                     }
                     cout << "Press any key to continue..." << endl;
                     getch();
}
void logout(){
    cout << "You have been logged out successfully!" << endl;
    cout << "Press any key to continue..." << endl;
    getch();
}
void view_my_profile(string names[], int ids[], int ages[], string diseases[]) {
    int searchId;
    bool found = false;
    

    cout << "Please enter your Patient ID: ";
    cin >> searchId;

    for (int i = 0; i < patientCount; i++) {
        if (ids[i] == searchId) {
            cout <<"Patient Record:" << endl;
            cout << "ID:       " << ids[i] << endl;
            cout << "Name:     " << names[i] << endl;
            cout << "Age:      " << ages[i] << endl;
            cout << "Diagnosis: " << diseases[i] << endl;
            found = true;
            break; // Exit loop once found
        }
    }

    if (!found) {
        cout << "Error: No record found for ID " << searchId << endl;
    }
}
void patient_self_update(string names[], int ids[], int ages[]) {
    int searchId;
    bool found = false;

    cout << " Update Personal Information " << endl;
    cout << "Enter your Patient ID to verify identity: ";
    cin >> searchId;

    for (int i = 0; i < patientCount; i++) {
        if (ids[i] == searchId) {
            found = true;
            cout << "Record Found for: " << names[i] << endl;           
            cout << "\nEnter updated Name: ";
            cin >> names[i];            
            cout << "Enter updated Age: ";
            cin >> ages[i];
            cout << "Information updated successfully!" << endl;
            break; 
        }
    }

    if (!found) {
        cout << "Access Denied: ID not found." << endl;
    }
}


int main(){
    //using the concept of parallel arrays like five different books for different data of the same person
    int ids[maxPatients]={1,2,3,4,5,6,7,8,9,10}; //it means we already have 10 patients
    string names[maxPatients]={"Ramzan", "Husnain", "Muneeb", "Junaid", "Sufyan", "Ali", "Ahmed", "Omar", "Yousaf", "Zainab"};
    int ages[maxPatients]={18,19,20,21,22,23,24,25,26,27};
    string diseases[maxPatients]={"Flu", "Cold", "Fever", "Headache", "Stomachache", "Cough", "Body Pain", "Dizziness", "Nausea", "Fatigue"};

    //for the history of 5 patients
    // hist size and p count declared globally so that we can use them in other functions as well
    int histIds[histSize]={1,2,3,4,5};
    string histNames[histSize]={"Ramzan", "Husnain", "Muneeb", "Junaid", "Sufyan"};
    int histAges[histSize]={18,19,20,21,22};
    string histDiseases[histSize]={"Flu", "Cold", "Fever", "Headache", "Stomachache"};

    while(true){
        cout<<endl;
        system("cls");

        cout<<endl;
        cout<<"|HOSPITAL MANAGEMENT SYSTEM|"<<endl;
        cout<<endl;

        cout<<"1 admin "<<endl;
        cout<<"2 patient "<<endl;  
        cout<<"3 exit "<<endl;
        cout<<"choose option : ";
        string userOption;
        cin>>userOption;
    

    //now we are going to write the code for admin panel 
    if(userOption == "1"){
        int countattempts = 0;
        system("cls");
        //now we are going to write the code for the login system of admin
        for(int i=0;i<3;i++){
            cout<<"Welcome to admin portal: login attempt "<<i+1<<endl;
            cout<<"enter username : ";
            string user_name;
            cin>>user_name;
            cout<<"enter password : ";
            string password;
            cin>>password;
        

            if(user_name == "admin" && password == "123"){
                cout<<"you are successfully logged in!"<<endl;
                cout<<"press any key to continue..."; 
                getch(); // so that it wait for us to press any key before going to next  part
            
            while(true)
            {
                system("cls");
                cout << "1 Show all patients information" << endl;
                cout << "2 Search patient by name" << endl;
                cout << "3 Update patient information" << endl;
                cout << "4 Delete patient " << endl;
                cout << "5 Add new patient " << endl;
                cout << "6 View patient history " << endl;
                cout << "7 Logout " << endl;

                string adminOption;
                cout <<"Please select option : ";
                cin >> adminOption;

                if(adminOption == "1")
                {
                    // calling function to show all patients information
                    show_all_patients(names, ids, ages, diseases);
                    cout <<"press any key to continue..." << endl;
                getch();
                }
                
            
                else if(adminOption == "2")
                {
                    //calling function to search patient by name
                    search_patient_by_name(names, ids, ages, diseases);
                cout << "Press any key to continue..." << endl;
                    getch();
                }
                 
                else if(adminOption == "3")
                {
                    //calling function to update patient information
                    update_patient_information(names, ids, ages, diseases);
                    cout << "Press any key to continue..." << endl;
                    getch();
                }
                else if(adminOption == "4"){ //code to delete patient record
                    delete_patient(names, ids, ages, diseases);
                    cout << "Press any key to continue..." << endl;
                    getch();

                     }
                else if(adminOption == "5"){
                    // calling function for adding new patient
                    add_new_patient(names, ids, ages, diseases, histIds, histNames, histAges, histDiseases);
                    cout << "Press any key to continue..." << endl;
                    getch();

                } else if(adminOption == "6"){
                    // calling function to view patient history
                    view_patient_history(histIds, histNames, histAges, histDiseases);
                     cout << "Press any key to continue..." << endl;
                     getch();
                }
                else if(adminOption == "7"){
                    // code for logout
                    logout();
                    getch();
                break; // this will break the patient menu and return to main menu            
        }
    } //close while true before admin options

    //  added break to exit the login for-loop after successful login
    break;

    } // Closes password check if statement 
    
} // Closes for loop for login attempts

} // closes user option 1 for admin panel 
else if(userOption == "2"){
    cout << "|----------PATIENT MENU----------|" << endl;
    cout << "1 View patient history " << endl;
    cout << "2 update your information " << endl;
    cout << "3 Logout " << endl;
    string patientOption;
    cout << "Please select option : ";
    cin >> patientOption;
    if(patientOption == "1"){
        // similar to view patient history in admin panel but here we will show only the history of that particular patient
        view_my_profile(names, ids, ages, diseases);
        cout << "Press any key to continue..." << endl;
        getch();
    }
    else if(patientOption == "2"){
        // similar to update patient information
        patient_self_update(names, ids, ages);
        cout << "Press any key to continue..." << endl;
        getch();
    }
    else if(patientOption == "3"){
        // code for logout
        logout();
        getch();
    }
 }
 
 else if(userOption == "3"){
    cout << "Exiting system. Goodbye!" << endl;
    break;
 }
 } //closes while true of main menu
   return 0;
}