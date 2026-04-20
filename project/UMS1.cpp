#include <iostream>
#include <conio.h>

using namespace std;

main()
{

    int total_students = 1000; // total size
    int current_student = 7;

    // data structures

    string name_array[total_students] = {"sara", "ayesha", "ali", "usman", "zara", "hamza", "noor"};
    int age_array[total_students] = {19, 20, 21, 20, 19, 22, 20};
    float matric_array[total_students] = {1020, 1036, 980, 1050, 1015, 995, 1040};
    float inter_array[total_students] = {950, 993, 910, 1020, 975, 930, 1005};
    float ecat_array[total_students] = {300, 350, 280, 370, 320, 260, 340};
    string preference1_array[total_students] = {"cs", "it", "ee", "cs", "se", "it", "cs"};
    string preference2_array[total_students] = {"se", "cs", "cs", "se", "cs", "ee", "se"};
    string preference3_array[total_students] = {"it", "se", "it", "ee", "it", "cs", "it"};
    float aggregate_array[total_students];

    // CRUD create , read , update , delete
    while (true)
    {

        // main header of university management system
        system("cls");
        cout << "------------------------------------------------------" << endl;
        cout << "--------UNIVERSITY ADMISSION MANAGEMENT SYSTEM--------" << endl;
        cout << "------------------------------------------------------" << endl;

        cout << endl;

        cout << " USER MENU " << endl;
        cout << "1. Admin   " << endl;
        cout << "2. Student " << endl;
        cout << "3. to exit " << endl;
        cout << endl;

        cout << "choose option : ";
        string user_option;
        cin >> user_option;
        cout << endl;

        cout << " you chose : " << user_option << endl;

        if (user_option == "1")
        {
            // write here the admin code

            int count_attempt = 0;

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Admin Menu : " << " login attempt : " << i + 1 << endl;
                cout << " Enter username : ";
                string user_name;
                cin >> user_name;
                cout << " Enter password : ";
                string password;
                cin >> password;

                if (user_name == "admin" && password == "1234")
                {
                    cout << " successfully logged in " << endl;

                    while (true)
                    {
                        system("cls");

                        cout << " 1. Show all students " << endl;
                        cout << " 2. Search student  " << endl;
                        cout << " 3. Update student record " << endl;
                        cout << " 4. Generate merit list " << endl;
                        cout << " 5. Delete record by name" << endl;
                        cout << " 6. Log out " << endl;

                        cout << " Choose the option : ";
                        string admin_option;
                        cin >> admin_option;

                        if (admin_option == "1")
                        {
                            // show student record
                            cout << " Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3 " << endl;
                            for (int i = 0; i < current_student; i++)
                            {
                                if (name_array[i] != "")
                                {

                                    cout << name_array[i] << "\t" << age_array[i] << "\t" << matric_array[i] << "\t" << inter_array[i]
                                         << "\t" << ecat_array[i] << "\t" << preference1_array[i] << "\t" << preference2_array[i] << "\t"
                                         << preference3_array[i] << endl;
                                }
                            }
                        }
                        else if (admin_option == "2")
                        {
                            // search student by name function
                            cout << " Enter the name you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < current_student; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << " Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << " Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3 " << endl;
                                cout << name_array[found_index] << "\t" << age_array[found_index] << "\t" << matric_array[found_index] << "\t" << inter_array[found_index]
                                     << "\t" << ecat_array[found_index] << "\t" << preference1_array[found_index] << "\t" << preference2_array[found_index] << "\t"
                                     << preference3_array[found_index] << endl;
                            }
                        }
                        else if (admin_option == "3")
                        {
                            // update student record
                            cout << " Enter the name you want to update record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < current_student; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << " ------- OLD RECORD ------- " << endl;
                                cout << " Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3 " << endl;
                                cout << name_array[found_index] << "\t" << age_array[found_index] << "\t" << matric_array[found_index] << "\t" << inter_array[found_index]
                                     << "\t" << ecat_array[found_index] << "\t" << preference1_array[found_index] << "\t" << preference2_array[found_index] << "\t"
                                     << preference3_array[found_index] << endl;

                                cout << " Enter new record for update " << endl;
                                cout << " Enter your name : ";
                                string name;
                                cin >> name;
                                cout << " Enter age : ";
                                int age;
                                cin >> age;
                                cout << " Enter matric marks : ";
                                float matric;
                                cin >> matric;
                                cout << " Enter FSC marks : ";
                                float inter;
                                cin >> inter;
                                cout << " Enter ECAT marks : ";
                                float ecat;
                                cin >> ecat;
                                cout << " Enter CS , SE , IT as your preferences " << endl;
                                cout << " Enter your 1rst preference : ";
                                string pref1;
                                cin >> pref1;
                                cout << " Enter your 2nd preference : ";
                                string pref2;
                                cin >> pref2;
                                cout << " Enter your 3rd preference : ";
                                string pref3;
                                cin >> pref3;

                                // data stored in arrays
                                name_array[found_index] = name;
                                age_array[found_index] = age;
                                matric_array[found_index] = matric;
                                inter_array[found_index] = inter;
                                ecat_array[found_index] = ecat;
                                preference1_array[found_index] = pref1;
                                preference2_array[found_index] = pref2;
                                preference3_array[found_index] = pref3;
                            }
                            else
                            {
                                cout << " Record not found " << endl;
                            }
                        }
                        else if (admin_option == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < current_student; i++)
                            {
                                float aggregate = matric_array[i] / 1050.0 * 100.0 * 0.30 + inter_array[i] / 1100.0 * 100.0 * 0.4 + ecat_array[i] / 400.0 * 100.0 * 0.3;
                                aggregate_array[i] = aggregate;
                            }

                            // sorting data on the basis of aggregate
                            for (int i = 0; i < current_student; i++)
                            {
                                for (int j = i; j < current_student; j++)
                                {
                                    if (aggregate_array[i] < aggregate_array[j])
                                    {

                                        // swapping of names
                                        string temp = name_array[i];
                                        name_array[i] = name_array[j];
                                        name_array[j] = temp;

                                        // swapping of age
                                        int temp_age = age_array[i];
                                        age_array[i] = age_array[j];
                                        age_array[j] = temp_age;

                                        // swapping of matric
                                        float temp_matric = matric_array[i];
                                        matric_array[i] = matric_array[j];
                                        matric_array[j] = temp_matric;

                                        // swapping of inter
                                        float temp_inter = inter_array[i];
                                        inter_array[i] = inter_array[j];
                                        inter_array[j] = temp_inter;

                                        // swapping of ecat
                                        float temp_ecat = ecat_array[i];
                                        ecat_array[i] = ecat_array[j];
                                        ecat_array[j] = temp_ecat;

                                        // swapping of pref1
                                        string temp_pref1 = preference1_array[i];
                                        preference1_array[i] = preference1_array[j];
                                        preference1_array[j] = temp_pref1;

                                        // swapping of pref2
                                        string temp_pref2 = preference2_array[i];
                                        preference2_array[i] = preference2_array[j];
                                        preference2_array[j] = temp_pref2;

                                        // swapping of pref3
                                        string temp_pref3 = preference3_array[i];
                                        preference3_array[i] = preference3_array[j];
                                        preference3_array[j] = temp_pref3;

                                        // swapping of aggregate
                                        float temp_aggregate = aggregate_array[i];
                                        aggregate_array[i] = aggregate_array[j];
                                        aggregate_array[j] = temp_aggregate;
                                    }
                                }
                            }
                            // code to display all data with aggregate
                            cout << " Name\tAge\taggregate " << endl;
                            for (int i = 0; i < current_student; i++)
                            {
                                if (name_array[i] != "")
                                {

                                    cout << name_array[i] << "\t" << age_array[i] << "\t" << aggregate_array[i] << endl;
                                }
                            }
                        }
                        else if (admin_option == "5")
                        {
                            // delete student record
                            cout << " Enter the name you want to delete record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < current_student; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                name_array[found_index] = "";
                                age_array[found_index] = 0;
                                matric_array[found_index] = 0;
                                inter_array[found_index] = 0;
                                ecat_array[found_index] = 0;
                                preference1_array[found_index] = "";
                                preference2_array[found_index] = "";
                                preference3_array[found_index] = "";
                                cout << " Record of " << name << " Deleted " << endl;
                            }
                            else
                            {
                                cout << " Record not found " << endl;
                            }
                        }
                        else if (admin_option == "6")
                        {
                            // back
                            break;
                        }
                        else
                        {
                            cout << " wrong option selected " << endl;
                        }
                        cout << " press any key to continue ... " << endl;
                        getch();
                    }
                    cout << " Press any key to continue ... ";
                    getch();
                    break;
                }
                else
                {
                    cout << "invalid username or password . try again !" << endl;
                }
                cout << " Press any key to continue ... " << endl;

                getch();
            }
        }
        else if (user_option == "2")
        {
            // write here the student code
            system("cls");
            cout << "Welcome to UMS Student Portal " << endl;
            cout << " Enter your name : ";
            string name;
            cin >> name;
            cout << " Enter age : ";
            int age;
            cin >> age;
            cout << " Enter matric marks : ";
            float matric;
            cin >> matric;
            cout << " Enter FSC marks : ";
            float inter;
            cin >> inter;
            cout << " Enter ECAT marks : ";
            float ecat;
            cin >> ecat;
            cout << " Enter CS , SE , IT as your preferences " << endl;
            cout << " Enter your 1rst preference : ";
            string pref1;
            cin >> pref1;
            cout << " Enter your 2nd preference : ";
            string pref2;
            cin >> pref2;
            cout << " Enter your 3rd preference : ";
            string pref3;
            cin >> pref3;

            // data stored in arrays
            name_array[current_student] = name;
            age_array[current_student] = age;
            matric_array[current_student] = matric;
            inter_array[current_student] = inter;
            ecat_array[current_student] = ecat;
            preference1_array[current_student] = pref1;
            preference2_array[current_student] = pref2;
            preference3_array[current_student] = pref3;
            current_student++;
            cout << " Your data has been saved " << endl;

            cout << " Press any key to continue ... " << endl;
            getch();
        }
        else if (user_option == "3")
        {
            break;
        }
        else
        {
            cout << " you entered wrong option " << endl;
        }
    } // end of our main while loop

    cout << endl
         << "thanks for using this software ";
}