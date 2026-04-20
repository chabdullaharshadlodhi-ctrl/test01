#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// User-defined function prototype
string timeTravel(int h, int m);

int main() {
    int hours, minutes;
    
    cout << "Enter current hours (0-23): ";
    cin >> hours;
    cout << "Enter current minutes (0-59): ";
    cin >> minutes;

    // Call the function and show the result
    cout << "Arrival Time: " << timeTravel(hours, minutes) << endl;

    getch();
    return 0;
}

// Function Definition
string timeTravel(int h, int m) {
    // Step 1: Add the time travel jump
    m = m + 15;

    // Step 2: Logic for Minute Overflow
    if (m >= 60) {
        m = m - 60; // Keep the remaining minutes
        h = h + 1;  // Move to the next hour
    }

    // Step 3: Logic for Hour Overflow (Midnight)
    if (h >= 24) {
        h = 0; // Reset to start of the new day
    }

    // Step 4: Convert numbers to string format "hh:mm"
    // to_string() is a pre-defined function that converts int to string
    string result = to_string(h) + ":" + to_string(m);
    
    return result;
}