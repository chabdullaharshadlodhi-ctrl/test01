#include<iostream>
using namespace std;

//Max limit
const int MAX = 100;

//Function  prototypes
bool login();
void menu();
void addStudent(string names[], int ages[], int& count);
void viewStudents(string names[], int ages[], int count);
void addcourse(string courses[], int& courseCount);

//Main function
int main() 
{
    if (login()) 
    return 0;
    
    string studentNames[MAX];
    int studentAges[MAX];
    string courses[MAX];

    int studentCount = 0;
    int courseCount = 0;
    int choice;

    while(true)
    {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice==1)
        {
            addStudent(studentNames, studentAges, studentCount);
        }
        else if (choice==2)
        {
            viewStudents(studentNames, studentAges, studentCount);
        }
        else if (choice==3)
        {
            addcourse(courses, courseCount);
        }
        else if (choice==4)
        {
            cout << "Exiting program." << endl;
            return 0;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

}

//Login Function
bool login() 
{
    string username, password;

    for(int i=0; i<3; i++)
    {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == "admin" && password == "1234") 
        {
            cout << "Login successful!" << endl;
            return true;
        }
        else 
        {
            cout << "Invalid credentials. Try again." << endl;
        }
    }

    cout << "Too many failed attempts. Exiting program." << endl;
    return false;
}

//Menu Function 
void menu()
{
    cout << "-----------------------------" << endl;
    cout << "University Management System" << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Add Course" << endl;
    cout << "4. Exit" << endl;
    cout<< "Enter your choice: ";
}

//Add Student Function
void addStudent(string names[], int ages[], int& count)
{
    if(count >= MAX)
    {
        cout << "Student limit reached. Cannot add more students." << endl;
        return;
    }
    cout << "Enter student name: ";
    cin >> names[count];
    cout << "Enter student age: ";
    cin >> ages[count];
    count++;
    cout << "Student added successfully!" << endl;
}

//view students
void viewStudents(string names[], int ages[], int count)
{
    if(count == 0)
    {
        cout << "No students to display." << endl;
        return;
    }
    cout << "Student List:" << endl;
    for(int i=0; i<count; i++)
    {
        cout << "Student" <<i+1<<endl;
        cout << "Name: " << names[i] << endl;
        cout << "Age: " << ages[i] << endl;
        cout << "-----------------------------" << endl;

    }

}

//Add course function
void addcourse(string courses[], int& courseCount)
{
    if(courseCount >= MAX)
    {
        cout << "Course limit reached. Cannot add more courses." << endl;
        return;
    }
    cout << "Enter course name: ";
    cin >> courses[courseCount];
    courseCount++;
    cout << "Course added successfully!" << endl;
}   