#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int TOTAL_STUDENTS = 1000;
    int index = 7; // Updated to 7 students
    

    string namesArray[TOTAL_STUDENTS] = {
        "Ali", "Zain", "Ahmed", "Fatima", "Hassan", "Ayesha", "Bilal"};

    int ageArray[TOTAL_STUDENTS] = {
        20, 21, 19, 20, 22, 21, 20};

    float matricArray[TOTAL_STUDENTS] = {
        850, 900, 820, 915, 780, 935, 865};

    float interArray[TOTAL_STUDENTS] = {
        900, 950, 880, 945, 855, 970, 920};

    float ecatArray[TOTAL_STUDENTS] = {
        300, 350, 280, 340, 260, 380, 320};

    string pref1Array[TOTAL_STUDENTS] = {
        "CE", "CS", "ME", "CS", "EE", "CS", "SE"};

    string pref2Array[TOTAL_STUDENTS] = {
        "CS", "CE", "CS", "SE", "CS", "SE", "CS"};

    string pref3Array[TOTAL_STUDENTS] = {
        "EE", "CS", "EE", "EE", "ME", "EE", "CS"};

    float aggriArray[TOTAL_STUDENTS]; // Will be calculated later

    

    while (true)
    {
        cout << endl;
        system("cls");
        cout << "|--------------------------------------------------------|" << endl;
        cout << "|-------University Admission Management System-----------|" << endl;
        cout << "|--------------------------------------------------------|" << endl;

        cout << "User menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit" << endl;
        int userOption;
        cout << "Please select an option: ";
        cin >> userOption;

        cout << "You choose option: " << userOption << endl;
        if (userOption == 1)
        {
            int countattempts = 0;
            system("cls");
            for (int i = 0; i < 3; i++)
            {
                cout << "Welcome to the Admin portal: Login attempt " << i + 1 << endl;
                cout << "Enter admin username: ";
                string adminUsername;
                cin >> adminUsername;
                cout << "Enter admin password: ";
                string adminPassword;
                cin >> adminPassword;
                if (adminUsername == "admin" && adminPassword == "123")
                {
                    cout << "Login successful!" << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students information" << endl;
                        cout << "2. Search student by name" << endl;
                        cout << "3. Update student information" << endl;
                        cout << "4. Generate merit list" << endl;
                        cout << "5. Delete student record" << endl;
                        cout << "6. Logout" << endl;

                        int adminOption;
                        cout << "Please select an option: ";
                        cin >> adminOption;

                        if (adminOption == 1)
                        {
                            // show all students information
                            cout << "Name\tAge\tMatric Marks\tInter Marks\tECAT Marks\tPref1\tPref2\tPref3" << endl;
                            for (int i = 0; i < index; i++) // Fixed: declared new i variable
                            {
                                if (namesArray[i] != "")
                                {
                                    cout << namesArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t\t" << interArray[i] << "\t\t" << ecatArray[i] << "\t\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                            cout << "Press any key to continue..." << endl;
                            getch();
                        }
                        else if (adminOption == 2)
                        {
                            // find student by name
                            cout << "Enter the name of the student to search: ";
                            string searchName;
                            cin >> searchName;

                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] == searchName)
                                {
                                    foundIndex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Student not found." << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric Marks\tInter Marks\tECAT Marks\tPref1\tPref2\tPref3" << endl;
                                cout << namesArray[foundIndex] << "\t" << ageArray[foundIndex] << "\t" << matricArray[foundIndex] << "\t\t" << interArray[foundIndex] << "\t\t" << ecatArray[foundIndex] << "\t\t" << pref1Array[foundIndex] << "\t" << pref2Array[foundIndex] << "\t" << pref3Array[foundIndex] << endl;
                            }
                            cout << "Press any key to continue..." << endl;
                            getch();
                        }
                        else if (adminOption == 3)
                        {
                            cout << "Enter the name of the student to update: ";
                            string updateName;
                            cin >> updateName;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] == updateName)
                                {
                                    found = true;
                                    foundIndex = i;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-------old record--------" << endl;
                                cout << "Name\tAge\tMatric Marks\tInter Marks\tECAT Marks\tPref1\tPref2\tPref3" << endl;
                                cout << namesArray[foundIndex] << "\t" << ageArray[foundIndex] << "\t" << matricArray[foundIndex] << "\t\t" << interArray[foundIndex] << "\t\t" << ecatArray[foundIndex] << "\t\t" << pref1Array[foundIndex] << "\t" << pref2Array[foundIndex] << "\t" << pref3Array[foundIndex] << endl;

                                cout << "Enter new record for the student: " << endl;
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter your age: ";
                                int age;
                                cin >> age;
                                cout << "Enter your matric marks: ";
                                float matric_marks;
                                cin >> matric_marks;
                                cout << "Enter your intermediate marks: ";
                                float inter_marks;
                                cin >> inter_marks;
                                cout << "Enter your ECAT marks: ";
                                float ecat_marks;
                                cin >> ecat_marks;
                                cout << "Enter CS , SE OR EE AS your first preference: " << endl;
                                cout << "Enter your first preference: ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your second preference: ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your third preference: ";
                                string pref3;
                                cin >> pref3;

                                namesArray[foundIndex] = name;
                                ageArray[foundIndex] = age;
                                matricArray[foundIndex] = matric_marks;
                                interArray[foundIndex] = inter_marks;
                                ecatArray[foundIndex] = ecat_marks;
                                pref1Array[foundIndex] = pref1;
                                pref2Array[foundIndex] = pref2;
                                pref3Array[foundIndex] = pref3;
                                cout << "Your information has been saved successfully!" << endl;
                                cout << "Press any key to continue..." << endl;
                                getch();
                            }
                            else
                            {
                                cout << "Student not found." << endl;
                                cout << "Press any key to continue..." << endl;
                                getch();
                            }
                        }
                        else if (adminOption == 4)
                        {
                            // generate merit list
                            for (i = 0; i < index; i++)
                            {
                                float aggri = (matricArray[i] / 1100) * 100 * 0.3 + (interArray[i] / 1100) * 100 * 0.3 + (ecatArray[i] / 400) * 100 * 0.4;
                                aggriArray[i] = aggri; // Storing aggregate in aggriArray temporarily for sorting
                            
                            }

                            // Sorting based on aggregate using 
                            for(int i=0; i < index; i++)
                            {
                            for(int j = i + 1; j < index; j++)
                            {
                             if(aggriArray[i] < aggriArray[j])
                                {
                                    //swapping concept like we have two glasses and we are swapping the content of glasses but here we have 8 arrays so we have to swap in all arrays
                                    // swapping of name
                                    string temp_name = namesArray[i];
                                    namesArray[i] = namesArray[j];
                                    namesArray[j] = temp_name;

                                    // swapping of age
                                     int temp_age = ageArray[i];
                                     ageArray[i] = ageArray[j];
                                     ageArray[j] = temp_age;

                                    // swapping of matric
                                    float temp_matric = matricArray[i];
                                    matricArray[i] = matricArray[j];
                                    matricArray[j] = temp_matric;

                                    // swapping of inter
                                    float temp_inter = interArray[i];
                                    interArray[i] = interArray[j];
                                    interArray[j] = temp_inter;

                                    // swapping of ecat
                                    float temp_ecat = ecatArray[i];
                                    ecatArray[i] = ecatArray[j];
                                    ecatArray[j] = temp_ecat;

                                    // swapping of pref1
                                    string temp_pref1 = pref1Array[i];
                                    pref1Array[i] = pref1Array[j];
                                    pref1Array[j] = temp_pref1;

                                    // swapping of pref2
                                    string temp_pref2 = pref2Array[i];
                                    pref2Array[i] = pref2Array[j];
                                    pref2Array[j] = temp_pref2;

                                    // swapping of pref3
                                    string temp_pref3 = pref3Array[i];
                                    pref3Array[i] = pref3Array[j];
                                    pref3Array[j] = temp_pref3;

                                     // swapping of aggregate
                                     float temp_aggregate = aggriArray[i];
                                     aggriArray[i] = aggriArray[j];
                                     aggriArray[j] = temp_aggregate;
                                }
                            }
                                
                            }
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++) // Fixed: declared new i variable
                            {
                                if (namesArray[i] != "")
                                {
                                    cout << namesArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                    
                                }
                                
                            }
                            cout<< "Press any key to continue..." << endl;
                            getch();

                            // admit students into discipline
                        }
                        else if (adminOption == 5)
                        {
                            // delete student record
                            cout << "Enter the name of the student to delete: ";
                            string deleteName;
                            cin >> deleteName;
                            bool found = false;
                            int foundIndex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] == deleteName)
                                {
                                    found = true;
                                    foundIndex = i;
                                }
                            }
                            if (found == true)
                            {
                                namesArray[foundIndex] = "";
                                ageArray[foundIndex] = 0;
                                matricArray[foundIndex] = 0;
                                interArray[foundIndex] = 0;
                                ecatArray[foundIndex] = 0;
                                pref1Array[foundIndex] = "";
                                pref2Array[foundIndex] = "";
                                pref3Array[foundIndex] = "";
                                cout << "Record of " << deleteName << " deleted successfully!" << endl;
                            }
                            else
                            {
                                cout << "Record not found." << endl;
                            }
                        }
                        else if (adminOption == 6) // Logout
                        {
                            break; // Exit admin menu
                        }
                    }
                    break; // Exit login attempts after successful login
                }
                else
                {
                    cout << "Invalid credentials!" << endl;
                    if (i < 2)
                        cout << "Try again..." << endl;
                    else
                        cout << "Max attempts reached. Returning to main menu..." << endl;
                    cout << "Press any key to continue..." << endl;
                    getch();
                }
            }
        }
        else if (userOption == 2)
        {
            system("cls");
            cout << "Welcome to the Student portal" << endl;
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter your age: ";
            int age;
            cin >> age;
            cout << "Enter your matric marks: ";
            float matric_marks;
            cin >> matric_marks;
            cout << "Enter your intermediate marks: ";
            float inter_marks;
            cin >> inter_marks;
            cout << "Enter your ECAT marks: ";
            float ecat_marks;
            cin >> ecat_marks;
            cout << "Enter CS , SE OR EE AS your first preference: " << endl;
            cout << "Enter your first preference: ";
            string pref1;
            cin >> pref1;
            cout << "Enter your second preference: ";
            string pref2;
            cin >> pref2;
            cout << "Enter your third preference: ";
            string pref3;
            cin >> pref3;

            namesArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric_marks;
            interArray[index] = inter_marks;
            ecatArray[index] = ecat_marks;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << "Your information has been saved successfully!" << endl;
            cout << "Press any key to continue..." << endl;
            getch();
        }
        else if (userOption == 3)
        {
            cout << "Exiting the system..." << endl;
            break;
        }
    }
    cout << endl
         << "Thanks for using our software" << endl;
    return 0;
}