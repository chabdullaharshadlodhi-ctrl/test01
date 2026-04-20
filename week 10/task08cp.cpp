#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// User-defined function prototype
string checkOddishOrEvenish(int num);

int main() {
    int number;
    cout << "Enter a five-digit number: ";
    cin >> number;

    // Logic Check: Ensure it is a 5-digit number
    if (number < 10000 || number > 99999) {
        cout << "Error: Please enter exactly five digits." << endl;
    } else {
        // Calling the function and printing the result
        string result = checkOddishOrEvenish(number);
        cout << "The number is: " << result << endl;
    }

    getch();
    return 0;
}

// Function Definition
string checkOddishOrEvenish(int num) {
    int sum = 0;
    int temp = num; // We use a temporary variable so we don't lose the original number

    // Logic: Repeat 5 times because it's a 5-digit number
    for (int i = 0; i < 5; i++) {
        sum = sum + (temp % 10); // Grab the last digit and add to sum
        temp = temp / 10;        // Remove the last digit
    }

    // Checking the sum
    if (sum % 2 == 0) {
        return "Evenish";
    } else {
        return "Oddish";
    }
}