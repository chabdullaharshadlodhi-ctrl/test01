#include <iostream>
#include <conio.h>

using namespace std;

// User-defined function prototype
// It returns 'bool' (true/false)
bool isSymmetrical(int number);

int main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Logic Check: Ensure it is actually a 3-digit number
    if (num < 100 || num > 999)
    {
        cout << "Please enter exactly 3 digits!" << endl;
    }
    else
    {
        // Calling the function inside an IF statement
        if (isSymmetrical(num))
        {
            cout << num << " is symmetrical!" << endl;
        }
        else
        {
            cout << num << " is not symmetrical." << endl;
        }
    }

    getch();
    return 0;
}

// Function Definition
bool isSymmetrical(int number)
{
    // Step 1: Get the last digit
    int lastDigit = number % 10;

    // Step 2: Get the first digit
    // (In integer division, 121 / 100 = 1)
    int firstDigit = number / 100;

    // Step 3: Compare and return the result
    if (firstDigit == lastDigit)
    {
        return true;
    }
    else
    {
        return false;
    }
}