#include <iostream>
using namespace std;

// Function to calculate updated balance based on interest rules
float calculateBalance(float balance, int years) {
    float interestRate = 0.0;

    // Determine base interest rate from the balance amount
    if (balance < 10000) {
        interestRate = 0.05; // 5% interest
    } else if (balance >= 10000 && balance <= 50000) {
        interestRate = 0.07; // 7% interest
    } else {
        interestRate = 0.10; // 10% interest
    }

    // Add extra interest if the account is held for 3 or more years
    if (years >= 3) {
        interestRate += 0.02; // Extra 2% interest
    }

    // Calculate final balance by adding the interest amount to the base balance
    return balance + (balance * interestRate);
}

int main() {
    float balance;
    int years;

    // Take user input
    cout << "Enter Balance and years:" << endl;
    cin >> balance >> years;

    // Call function and display the result
    cout << "Updated Balance: " << calculateBalance(balance, years) << endl;

    return 0;
}