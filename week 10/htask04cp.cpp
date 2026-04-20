#include <iostream>
#include <string>

using namespace std;

// Function to calculate if the project can be finished on time
string projectTimeCalculation(int neededHours, int days, int workers) {
    // Calculate working days after removing 10% for training
    double workingDays = days * 0.90;
    
    // Calculate total available hours (8 normal + 2 overtime = 10 hours per worker per day)
    double totalHours = workers * 10 * workingDays;
    
    // Round down to the nearest integer by casting to int
    int availableHours = (int)totalHours;
    
    // Determine the result string based on available vs needed hours
    if (availableHours >= neededHours) {
        int hoursLeft = availableHours - neededHours;
        return "Yes!" + to_string(hoursLeft) + " hours left.";
    } else {
        int hoursNeeded = neededHours - availableHours;
        return "Not enough time!" + to_string(hoursNeeded) + " hours needed.";
    }
}

int main() {
    int neededHours, days, workers;
    
    // Read input from the console
    cin >> neededHours;
    cin >> days;
    cin >> workers;
    
    // Call the function and print the output
    cout << projectTimeCalculation(neededHours, days, workers) << endl;
    
    return 0;
}