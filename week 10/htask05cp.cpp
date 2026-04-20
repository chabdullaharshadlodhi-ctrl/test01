#include <iostream>
using namespace std;

// Function to calculate final salary based on base, score, and experience
float calculateSalary(float base, int score, int experience) {
    float bonusPercentage = 0.0;

    // Determine base bonus percentage from performance score
    if (score >= 90) {
        bonusPercentage = 0.20; // 20% bonus
    } else if (score >= 75 && score <= 89) {
        bonusPercentage = 0.10; // 10% bonus
    } else {
        bonusPercentage = 0.05; // 5% bonus
    }

    // Add extra bonus if experience is 5 years or more
    if (experience >= 5) {
        bonusPercentage += 0.05; // Extra 5% bonus
    }

    // Calculate the actual bonus amount and final salary
    float totalBonus = base * bonusPercentage;
    float finalSalary = base + totalBonus;

    return finalSalary;
}

int main() {
    float base;
    int score, experience;

    // Prompt user and take inputs
    cout << "Enter base, score and experience in years:" << endl;
    cin >> base >> score >> experience;

    // Call the function and output the result
    cout << "Final Salary: " << calculateSalary(base, score, experience) << endl;

    return 0;
}