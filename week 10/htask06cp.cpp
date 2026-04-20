#include <iostream>
using namespace std;

// Helper function to calculate the factorial of a single digit
int factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

// Function to determine if a number is a Strong Number
bool isStrong(int num) {
    int originalNum = num;
    int sumOfFactorials = 0;

    // Extract digits and sum their factorials
    while (num > 0) {
        int digit = num % 10;
        sumOfFactorials += factorial(digit);
        num /= 10;
    }

    // Check if the sum equals the original number
    return sumOfFactorials == originalNum;
}

int main() {
    int number;
    
    // Take user input
    cin >> number;
    
    // Check and display the result based on the boolean return value
    if (isStrong(number)) {
        cout << "Strong Number" << endl;
    } else {
        cout << "Not Strong Number" << endl;
    }

    return 0;
}