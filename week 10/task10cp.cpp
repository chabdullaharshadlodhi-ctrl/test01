#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// User-defined function prototype
string convertToText(int num);

int main() {
    int n;
    cout << "Enter a number between 1 and 99: ";
    cin >> n;

    if (n < 1 || n > 99) {
        cout << "Out of range!" << endl;
    } else {
        cout << "In English: " << convertToText(n) << endl;
    }

    getch();
    return 0;
}

string convertToText(int num) {
    // Arrays to store the English words
    string units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                      "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Logic Step 1: Handle 1-19 directly
    if (num < 20) {
        return units[num];
    } 
    // Logic Step 2: Handle 20-99
    else {
        int tensIndex = num / 10; // Get the tens digit (e.g., 43 / 10 = 4)
        int unitsIndex = num % 10; // Get the units digit (e.g., 43 % 10 = 3)
        
        if (unitsIndex == 0) {
            return tens[tensIndex]; // e.g., "Forty"
        } else {
            return tens[tensIndex] + "-" + units[unitsIndex]; // e.g., "Forty-Three"
        }
    }
}